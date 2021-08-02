#include<iostream>
using namespace std;
int main(){
    int x,m=-1,k=0;
for(int i=0;i<5;i++){
    cin>>x;
    if(i==0){m=x;k++;continue;}
    if(x>=m){k++; m=x;}
}cout<<k;
}

