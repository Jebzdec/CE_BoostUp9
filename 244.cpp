#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    int n[4]={},s[4]={},tmp[4]={},T[4]={};
    char c;
    for(int i=1;i<=3;i++){
        cin>>n[i];
        if(i<3) cin>>c;
    }for(int i=1;i<=3;i++){
        cin>>s[i];
        if(i<3) cin>>c;
    }for(int i=1;i<=3;i++){
        cin>>tmp[i];
        if(i<3) cin>>c;
    }
    for(int i=3;i>=1;i--){
        T[i]=n[i]-s[i];
        while(T[i]<0){
            i>1? T[i]+=60:T[i]+=24;
            n[i-1]-=1;
        }
    }
    cout<<T[1];
    for(int i=2;i<=3;i++)cout<<":"<<T[i];
    cout<<endl;
    for(int i=3;i>=1;i--){
        T[i]=T[i]-tmp[i];
        while(T[i]<0){
            i>1? T[i]+=60:T[i]+=24;
            T[i-1]-=1;
        }
    }
    T[0]==0? cout<<"Nasus Win!!!":cout<<"Renekton Win!!!";
    fin:;
}
