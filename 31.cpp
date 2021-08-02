#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    string a;
    cin>>a;
    if(a.find("xx")<a.size()) cout<<"0";
    else{
        int k=0;
        for(int i=0;i<a.size()-1;i+=2){
            if(a[i]=='x') k++;
            k++;
        }cout<<k;
    }
}
