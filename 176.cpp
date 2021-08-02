#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
string a;
getline(cin,a);
int k=0,f=0;
for(int i=0;i<a.size();i++){
    int u=a.find("JadelnwZa:[",i);
    int s=u+11;
    if(u<0 or u>=a.size())
        break;
    i=s;
    u=a.find("JadelnwZa:[",i);
    int p;
    if(u>=0 and u<=a.size()) p=a.find("]",i);
    else p=a.find("]",i);
    cout<<u<<" "<<p<<endl;
    if(p>=0 and p<a.size())
    for(int j=i;j<p;j++)
        cout<<a[j];

}
}
