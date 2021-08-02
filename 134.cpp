#include<iostream>
#include<string.h>
#include<math.h>
#define ll long long int
using namespace std;
char f[5]={},b[5]={},v[5];
void Process(){
    for(int i=3;i>=0;i--){
        //printf("%c %c %c\n",f[i],b[i],v[i]);
        v[i]=f[i]-b[i]+'0';
        if(f[i]<b[i]){
            f[i-1]=f[i-1]-1;
            v[i]+=10;
        }
    }
}
void Sort(){
for(int i=0;i<4;i++){
    f[i]=v[i];
    b[i]=v[i];
for(int j=0;j<i;j++){
    char c;
    if(f[j]<f[i]){
        c=f[j];
        f[j]=f[i];
        f[i]=c;
    }
    if(b[j]>b[i]){
        c=b[j];
        b[j]=b[i];
        b[i]=c;
    }
}
}
printf(": %s - %s = ",f,b);
Process();
}
int main()
{
cin>>v;
int n=strlen(v),zero=0,cnt=0;
for(int i=0;i<4;i++){
    if(v[i]=='0') zero++;
    if(v[i]=='\0')
        v[i]='0';
}
if(zero==n) printf(": 0000 - 0000 = 0");
else{
while(strcmp(v,"6174") and strcmp(v,"0000")){
    int p=0;cnt++;
    for(int i=0;i<4;i++){
    if(v[i]!='0') p=1;
    if(p==1 and cnt!=1)
    printf("%c",v[i]);
    }
    if(cnt!=1)cout<<endl;
    Sort();
}
strcmp(v,"0000")==0? printf("0"):printf("6174");
}
}
