#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
char c[5000];
scanf(" %[^\n]",c);
int n=strlen(c),x,y,mn;
int s=ceil(sqrt(float(n)));
for(int i=s;i>=0;i--){
        if(i==s){
            mn=(i+2)*(i+2);
            x=i+2;
        }
        else
        if(i*i>=n and (i+2)*(i+2)<=mn){
            mn=(i+2)*(i+2);
            x=i+2;
        }
}
int k=0;
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        if(i==0 or j==0 or i==x-1 or j==x-1) cout<<"#";
        else if(k<n){
            cout<<c[k];
            k++;
        }else cout<<" ";
    }cout<<endl;
}
}
