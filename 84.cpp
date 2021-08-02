#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    int p,u,d,o=0;
    char a;
    cin>>p>>a>>u>>d;
    int k=0;
    while(o<p){
        if(k==u+1){
            a-=d+1;
            k=0;
            while(a<'A'){
                a='G'-'A'+a+1;
            }
        }
        cout<<a;
        a++;
        if(a>'G') a='A';
        k++;
        o++;
    }
}



