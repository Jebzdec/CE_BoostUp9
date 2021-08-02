#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
vector<char> v;
string a;
cin>>a;
int k=0,f=0;
for(int i=0;i<a.size();i++){
    int u=a.find("JadelnwZa:[",i);
    int s=u+11;
    if(u<0 or u>=a.size()){
        u=a.size()-1;
        f=-1;
    }
    //cout<<u<<" "<<i<<" "<<f<<" ";
    if(!v.empty())
    for(int j=i-1;j<=u;j++){
            //cout<<j<<" "<<endl;
        if(a.find("]",j+1)>j and a.find("]",j+1)<=u){
            v.push_back(a[j]);
            k++;
        }
    }
    if(f==-1) break;
    i=s;
    int cnt=0;
    while(a[i]!=']' and i<a.size() and f==0){
        v.push_back(a[i]);
        cnt++;
        if(a[i+1]==']' and i+1<a.size())
            k+=cnt;
        i++;
    }
}
for(int i=0;i<k;i++) cout<<v[i];
cout<<endl;
//ll k=1,sum=0,u=0;
//for(int i=strlen(a)-1;i>=0;i--){
//    if(a[i]>='0' and a[i]<='9'){
//        u+=(a[i]-'0')*k;
//        if(a[i-1]=='-')
//            u*=-1;
//        k*=10;
//    }
//    else{
//        k=1;
//        sum+=u;
//        u=0;
//    }
//}
//sum+=u;
//cout<<sum;
}
