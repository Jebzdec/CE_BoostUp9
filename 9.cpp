#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int u=n*m-1;
    for(int i=0;i<n*m;i++){
        for(int j=0;j<u;j++) cout<<" ";
        int p=0;
        for(int j=0;j<2*i+1;j++){
            if(p<=2*(i%n)) cout<<"*";
            else cout<<" ";
                p++;
            if(p>2*(n-1)+1) p=0;
        }
        for(int j=0;j<u;j++) cout<<" ";
        cout<<endl;
        u--;
    }
}
