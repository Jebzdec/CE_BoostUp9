#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    char c[30];
    vector<char> a[3];
    cin>>c;
    int f=0;
    for(int i=0;i<strlen(c);i++){
        if(c[i]=='[') f=2;
        else if(c[i]==']') f=1;
        else{
            int j=i;
            if(f==2){
            while(c[j+1]!=']' and c[j+1]!='[' and j<strlen(c)) j++;
            for(int k=j;k>=i;k--)a[f].push_back(c[k]);
            i=j;
            }
            else if(f==1) a[f].push_back(c[i]);
        }
    }
    if(!a[2].empty())
    for(auto v=a[2].end()-1 ;v>=a[2].begin();v--)
        if(isalpha(*v)) cout<<*v;
    for(auto v:a[1]) if(isalpha(v)) cout<<v;
}
