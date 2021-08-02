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
printf("\n: %s - %s = ",f,b);
Process();
}
int main()
{
cin>>v;
int n=strlen(v),zero=0;
for(int i=0;i<4;i++){
    if(v[i]=='0') zero++;
    if(v[i]=='\0')
        v[i]='0';
}
if(zero==n) printf(": 0000 - 0000 = 0");
else{
while(strcmp(v,"6174") and strcmp(v,"0000")){
    int p=0;
    for(int i=0;i<4;i++){
    if(v[i]!='0') p=1;
    if(p==1)
    printf("%c",v[i]);
    }
    Sort();
}
strcmp(v,"0000")==0? printf("0"):printf("6174");
}

//char a,b,c;
//cin>>a>>b;
//c=a-b+'0'+10;
//cout<<c;

    //79
//int x,n=1,mx[2]={};
//cin>>x;
//if(x==1) cout<<"A";
//else if(x<1) cout<<"Error";
//int X=x;
//while(x>0){
//    if(x>=n){
//        if(n>mx[n%2])
//            mx[n%2]=n;
//    }
//    else{
//        if(x>mx[n%2])
//            mx[n%2]=x;
//    }
//    x-=n;
//    n+=1;
//}
//char line[n+2][1000]={};
//int cnt=0,u;
//for(int i=1;i<n;i++){
//        if(i%2==1){
//            cnt+=i;
//            if(cnt>X)
//                cnt=X;
//        }
//    for(int j=1;j<=i;j++){
//            if(i%2==0 and cnt>X) break;
//        line[i][j]=char(((cnt-1)%26)+65);
//        //printf("%d %d %d %c\n",i,j,cnt,line[i][j]);
//        if(i%2==0) cnt++;
//        else cnt--;
//    }
//    if(i%2==1) cnt+=i+1;
//    else cnt-=1;
//}
//float m=mx[0]+mx[1]-1;
//u=ceil(m/2);
//if(mx[1]>mx[0]) u+=1;
//for(int i=1;i<n;i++){
//        int k=1;
//    for(int j=1;j<=m;j++){
//        if(X<0) break;
//        if(i%2==1 and X<mx[i%2] and j<=u-X){
//            cout<<" ";
//        }
//        else{
//        if(i%2==1 and j>=u-i+1 and j<=u){
//            cout<<line[i][k];
//            k++;
//            X--;
//        }
//        else if(i%2==0 and j>=u and j<=u+i-1){
//            cout<<line[i][k];
//            k++;
//            X--;
//        }
//        else cout<<" ";
//        }
//}
//cout<<endl;
//}
}
