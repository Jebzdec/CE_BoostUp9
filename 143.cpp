#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    ll a,k=1,s=0;
    cin>>a;
    while(a>0){
        s+=(a%2)*k;
        a/=10;
        k*=2;
    }
    for(int i=0;i<10;i++){
        cout<<s<<endl;
        if((s*2)+1>1023){
            if(s%2==0) s=2;
            else  s=1;
            continue;
        }
        s=(s*2)+1;
    }
}
