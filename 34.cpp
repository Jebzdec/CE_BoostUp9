#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s;
int n,m;
char a[11][11];
cin>>n>>m;
cin>>s;
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        a[i][j]=(i%26)+'A';
for(int i=0;i<s.size();i++){
        int u=s[i]-'0';
    if(isdigit(s[i])){
        if(s[i-1]=='U'){
            char k=a[0][u];
            for(int j=0;j<n-1;j++)
                a[j][u]=a[j+1][u];
            a[n-1][u]=k;
        }else if(s[i-1]=='D'){
            int k=a[n-1][u];
            for(int j=n-1;j>=1;j--)
                a[j][u]=a[j-1][u];
            a[0][u]=k;
        }else if(s[i-1]=='L'){
            int k=a[u][0];
            for(int j=0;j<m-1;j++)
                a[u][j]=a[u][j+1];
            a[u][m-1]=k;
        }else if(s[i-1]=='R'){
            int k=a[u][m-1];
            for(int j=m-1;j>=1;j--)
                a[u][j]=a[u][j-1];
            a[u][0]=k;
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j];
    }cout<<endl;
}
}
