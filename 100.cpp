#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
int n,m;
cin>>m>>n;
char c[n+2][m+2];
int d[n+2][m+2]={};
int p[9][3]={{-1,-1},{-1,0},{1,-1},{1,0},{-1,1},{0,1},{0,-1},{1,1}};
for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        cin>>c[i][j];
        if(c[i][j]=='*')
            for(int k=0;k<8;k++)
                d[p[k][0]+i][p[k][1]+j]++;
    }
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(c[i][j]=='*') cout<<"*";
        else cout<<d[i][j];
    }cout<<endl;
}
}
