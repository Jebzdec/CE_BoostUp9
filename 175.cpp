#include<iostream>
#include<string.h>
#include<math.h>
#define ll long long int
using namespace std;
int main(){
char a[100000];
cin>>a;
ll k=1,sum=0,u=0;
for(int i=strlen(a)-1;i>=0;i--){
    if(a[i]>='0' and a[i]<='9'){
        u+=(a[i]-'0')*k;
        if(a[i-1]=='-')
            u*=-1;
        k*=10;
    }
    else{
        k=1;
        sum+=u;
        u=0;
    }
}
sum+=u;
cout<<sum;
}
