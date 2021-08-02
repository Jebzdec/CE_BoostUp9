#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
    char a[10000000],b[10000000];
int main(){
    vector<int> v;
    cin>>a>>b;
    int i=strlen(a)-1,j=strlen(b)-1,k=0;
    while(i>=0 or j>=0){
        int u=k;
        if(i>=0) u+=a[i]-'0';
        if(j>=0) u+=b[j]-'0';
        k=u/10;
        u%=10;
        v.push_back(u);
        i--;
        j--;
    }
    if(k!=0) v.push_back(k);
int f=0,p=0;
for(i=v.size()-1;i>=0;i--){
        if(v[i]!=0 and f==0) f=1;
        if(f==1){
        cout<<v[i];
        p=1;
        }
}
if(p==0) cout<<"0";
}
