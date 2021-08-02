#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    string d[8]={"Mo","Tu","We","Th","Fr","Sa","Su"};
    int k[8]={};
    k[5]=1;
    k[6]=1;
    string s,x;
    cin>>s;
    x=s;
    string a=s.substr(0,2),b=s.substr(3,5);
    int f=0,i=0;
    while(f!=2 and x[2]=='-' and x.size()==5){
        if(a==d[i] and f==0){
            f=1;
            if(x.size()<5){
            k[i]=1;
            break;
            }
        }
        if(f==1 and b==d[i]){
            k[i]=1;
            break;
        }
        if(f==1) k[i]=1;
        i++;
        if(i>6){
            if(f==0) break;
            fill(k,k+7,0);
            s=a;
            a=b;
            b=s;
            i=0;
            f=0;
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
            cin>>s;
        for(int j=0;j<7;j++){
            if(s==d[j])
                (k[j]==0)?cout<<"Nope.":cout<<"Yes.";
        }cout<<endl;
    }
//for(int i=0;i<7;i++) cout<<d[i]<<" "<<k[i]<<endl;
}
