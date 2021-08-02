#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,m[1000],x;
    cin>>n;
    for(int i=0;i<n;i++)cin>>m[i];
    for(int i=0;i<n;i++)
    for(int j=0;j<m[i];j++)cin>>x,v.push_back(x);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            if(v[i]<v[j]){
                int u=v[i];
                v[i]=v[j],v[j]=u;
            }
        }
    }
    if(v.empty())cout<<"No Output";
    int k=0;
    for(int i=0;i<v.size();i++){
        if(i==0) cout<<v[i]<<" ";
        else if(v[i]!=v[i-1]) cout<<v[i]<<" ";
    }
}
