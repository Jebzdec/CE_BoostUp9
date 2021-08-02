#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
    vector<int> v;
int main(){
    ll b,a,s=0;
    cin>>a>>b;
    if(!(a<10000 and a>b and  a>0 and b>0 and b<10000)){
        cout<<"error";
        goto fin;
    }
    for(int i=1;i<=a;i++) s+=i*(i+1);
    for(int i=1;i<=b;i++) s+=i*(i+1);
    while(v.size()<6){
        (s<=0)? v.push_back(0):v.push_back(s%10);
        s/=10;
    }
    for(auto i=v.end()-1;i>=v.begin();i--) cout<<*i;
    fin:;
}
