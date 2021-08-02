#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
int r,t;
cin>>r>>t;
int a=r,b=t,k=-1;
while(k!=0){
    k=a%b;
    a=b;
    b=k;
}k=r*(t/a);
cout<<k<<endl;
cout<<k/t<<" "<<k/r;
}
