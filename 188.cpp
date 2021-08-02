#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string c;
    cin>>c;
    int u=0,f=0,cnt=0,j,d[1000]={};
    char p;
    for(int i=0;i<c.size();i++){
        if(c[i]=='-') f=1;
        else if(isdigit(c[i])){
            u=(u*10)+(c[i]-'0');
            cnt++;
            if(!isdigit(c[i+1])){
                if(f==1){
                    j=1;
                    p=c[i-cnt-1];
                    if(d[i-cnt-1]==1) j=0;
                }else{
                    j=0;
                    p=c[i+1];
                }
                for(j;j<u;j++) cout<<p;
                if(f==0){
                    i++;
                    d[i]=1;
                }
                f=0,u=0,cnt=0;
            }
        }
        else cout<<c[i];
    }
}
