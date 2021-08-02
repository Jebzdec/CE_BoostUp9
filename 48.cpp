#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
char p[100]={};
int func2(int a,int k){
    if(a>0){
    p[k]=(a%2)+48;
    func2(a/2,k+1);
}}
int func(char a[],int n,int k){
    if(n>0) return func(a,n-1,k+1)+(int(a[n])-48)*pow(2,k);
    else return 0;
}
int main(){
char a[100],b[100],c;
cin>>a>>c>>b;
int x=func(a,strlen(a)-1,0);
int y=func(b,strlen(b)-1,0);
if(a[0]=='1') x*=-1;
if(b[0]=='1') y*=-1;
if(c=='+'){
    if(x+y>127 or x+y<-127){
        cout<<"Out of Memory";
        goto finish;
    }
    (x+y<0)?cout<<1:cout<<0;
    func2(abs(x+y),0);
}
if(c=='-'){
    if(x-y>127 or x-y<-127){
        cout<<"Out of Memory";
        goto finish;
    }
    (x-y<0)?cout<<1:cout<<0;
    func2(abs(x-y),0);
}

for(int i=strlen(p)-1;i>=0;i--) cout<<p[i];
finish:;
}
