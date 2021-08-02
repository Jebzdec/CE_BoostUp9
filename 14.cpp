#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    int n,m,x,y;
    cin>>n>>m;
    char a[n+2][m+2];
    int v[n+2][n+2]={};
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>a[i][j];
    cin>>y>>x;
    while(true){
    if((y==0 or x==0 or x==n+1 or y==m+1)){cout<<"YES"; break;}
        if(v[x][y]==1){cout<<"NO"; break;}
        v[x][y]=1;
        if(a[x][y]=='S') x+=1;
        if(a[x][y]=='N') x-=1;
        if(a[x][y]=='W') y-=1;
        if(a[x][y]=='E') y+=1;
    }
}
