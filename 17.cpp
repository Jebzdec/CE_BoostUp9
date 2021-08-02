#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    vector<int> v[1000];
    int n,k;cin>>n>>k;
    for(int i=0;i<k;i++){
        int x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int b=0;
    for(int i=0;i<=n;i++) v[i].size()%2==0? 1:b++;
    if(b==2 or b==0) cout<<"Yes";
    else cout<<"No";
}
