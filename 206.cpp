#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    int n,m,L=0,s=0,cnt=0,mx=INT_MIN;
    cin>>n>>m;
    char a[n+2][1000];
    int f[n+2];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        L+=strlen(a[i]);
        cnt++;
        if(cnt==m){
            if(L>mx) mx=L;
            for(int j=i-m+1;j<=i and s%2==0;j++){

            }
            cnt=1;
            s++;
            L=strlen(a[i]);
        }
    }
    cout<<mx;
    int k=0;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<k;j++) cout<<" ";
//    cout<<a[i];
//        if(i<m-1 or k==0) k+=strlen(a[i]);
//        else k-=strlen(a[i]);
//        cout<<endl;
//    }

}
