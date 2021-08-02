#include<iostream>
#include<string.h>
#define ll long long int
using namespace std;
int main(){
    char a[100],b[100],num[200];
    int p[200]={};
    cin>>a>>b;
    int i=strlen(a)-1,j=strlen(b)-1,k=0,t=0;
    while(i>=0 and j>=0){
            int u=a[i]+b[j]-'0'-'0';
            //cout<<u<<endl;
        num[k]=(u+t)%10;
        t=(u+t)/10;
        if(k%3==2)
            p[k]=1;
        i--;
        j--;
        k++;
    }
    //cout<<i<<j<<endl;
    while(i>=0){
        a[i]-=48;
        num[k]=(a[i]+t)%10;
        t=(a[i]+t)/10;
        if(k%3==2)
            p[k]=1;
        k++;
        i--;
    }
    while(j>=0){
        b[j]-=48;
        num[k]=(b[j]+t)%10;
        t=(b[j]+t)/10;
        if(k%3==2)
            p[k]=1;
        k++;
        j--;
    }
    if(t!=0){
        num[k]=t;
        if(k%3==2)
            p[k]=1;
        k++;
    }
    for(int i=k-1;i>=0;i--){
        if(p[i]==1 and i!=0)
            printf(",");
        printf("%d",num[i]);
    }
}
