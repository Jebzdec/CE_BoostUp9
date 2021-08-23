#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
char* process(char x[]){
    for(int i=0;i<strlen(x);i++) (x[i]=='0')? x[i]='1':x[i]='0';
    //cout<<x<<endl;
    return x;
}
int main(){
    char a[9],b[9],c;
    cin>>a>>c>>b;
    if(a[0]=='1') strcpy(a,process(a));
    if(b[0]=='1') strcpy(b,process(b));
    if(b[0]=='-') strcpy(b,process(b));
    cout<<a<<endl<<b;
}
