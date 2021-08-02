#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
int n,sum=0,x;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=8;j>=1;j--){
        cin>>x;
        sum+=j*x;
        if(j!=2) j--;
    }
}(sum%8==0)? cout<<sum/8:cout<<sum/8+1;
}
