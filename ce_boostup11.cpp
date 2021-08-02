#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
bool Compare(int x,int y){
    return x>y? 1:0;
}
int Num(char i[],int k){
    if(k>0) return (int(i[k])-48)*pow(2,7-k)+Num(i,k-1);
    else return 0;
}
int main(){
char a[9],b[9],s;
int op[8]={};
cin>>a>>s>>b;
int k=0;
if(a[0]==b[0]){
    if(s=='-'){
        b[0]=='0'? b[0]='1':b[0]='0';
        int numA=Num(a,7);
        int numB=Num(b,7);
        Compare(numA,numB)==1? op[0]=int(a[0])-48:op[0]=int(b[0])-48;
    }
for(int i=7;i>=1;i--){
    int u=a[i]-'0',v=b[i]-'0';
    op[i]=(u+v+k)%2;
    k=(u+v+k)/2;
}
if(k>0){
    cout<<"Out of Memory";
    goto finish;}
}
else{
    if(s=='-') b[0]=='0'? b[0]='1':b[0]='0';
    int numA=Num(a,7);
    int numB=Num(b,7);
    Compare(numA,numB)==1? op[0]=int(a[0])-48:op[0]=int(b[0])-48;
for(int i=7;i>=1;i--){
    int u=a[i]-'0',v=b[i]-'0';
    if(u-k<v){
        op[i]=u+2-v-k;
        k=-1;
    }
    else{
        op[i]=u-v-k;
        k=0;
    }
}
if(a[0]=='1' or b[0]=='1')
    op[0]=1;
else op[0]=0;
}
for(int i=0;i<8;i++){
    cout<<op[i];
}
finish:;


//x>y? cout<<func2(x/y,1):cout<<func2(y/x,1);
    //144
//char c[12][10]={"Red","Green","Blue","Orange","Yellow","Turquoise","Cyan","Violet","Magenta","White","Black","Grey"};
//int rgb[12][3]={{255,0,0},{0,255,0},{0,0,255},{255,125,0},{255, 255,0},{0, 255, 125},{0, 255, 255},{125, 0, 255},{255, 0, 255},{255, 255, 255},{0, 0, 0},{128, 128, 128}};
//int q,a[3],cnt[12]={},k;
//cin>>q;
//for(int i=0;i<q;i++){
//        bool f[12]={};
//    for(int j=0;j<3;j++){
//        cin>>a[j];
//        for(k=0;k<12;k++){
//            if(f[k]==1) continue;
//            if(abs(a[j]-rgb[k][j])>10 ) f[k]=1;
//            if(f[k]==0 and j==2) cnt[k]++;
//        }
//    }
//}
//for(int i=0;i<12;i++){
//    if(cnt[i]>0) cout<<c[i]<<" "<<cnt[i]<<endl;
//}
}
