#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
char p[100000]={};
int main(){
long long int x,y;
cin>>x>>y;
y--;
while(y>=0){
    if(x<=0)
        p[y]='0';
    else{
    p[y]=(x%2)+48;
    x=x/2;
    }
    y--;
}
cout<<p;
}
