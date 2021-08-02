#include <iostream>
#include <cmath>
#include<math.h>
#include<string.h>
#include <limits>
using namespace std;
int main(){
//    int num[100000];
//    int i=-1,k=0;
//    while(scanf("%d",&num[++i]) and num[i]!=0 );
//    int n=i-1;
//    while(i-- and i-1>=0){
//        if(num[i]>num[i-1])
//            k++;
//        else if(num[i]<num[i-1])
//            k--;
//        //cout<<i<<" "<< k<< endl;
//    }
//    //cout<<n;
//    if(k==n)
//        printf("Ascending Sort Order");
//    else if(k*-1==n)
//        printf("Descending Sort Order");
//    else
//        printf("Unsorted Order");

//float m;
//int p=0,n;
//scanf("%f",&m);
//n=m;
//if(m==n and m!=1 and m!=0 and m!=-1 ){
//n=abs(n);
//for(int i=2;i<=sqrt(n);i++){
//    if(n%i==0){
//        printf("IS NOT PRIME");
//        p=1;
//    }
//}
//if(p==0)
//        printf("IS PRIME");
//}
//else
//    printf("IS NOT PRIME");

//double a,b,c;
//if(scanf("%lf %lf %lf",&a,&b,&c)==3){
//double k=(b*b)-(4*a*c),x1,x2;
////cout<<k;
//if((a==0 and b==0)){
//    printf("Error");
//}
//else if(a==0){
//    printf("x = %.2f",-c/b);
//}
//else if(k>=0){
//    x2=(-b+sqrt(k))/(a*2);
//    x1=(-b-sqrt(k))/(a*2);
//    if(x2==-0)
//        x2=0;
//    if(x1==-0)
//        x1=0;
//    if(x1>x2){
//        int u=x1;
//        x1=x2;
//        x2=x1;
//    }
//    if(x1==x2)
//        printf("x = %.2f",x2);
//    else
//        printf("x1 = %.2f, x2 = %.2f",x1,x2);
//}
//else
//    printf("Error");
//}
//else
//    printf("Error");

//int a[10000];
//long long sum=0;
//int i=0,mx,mn;
//double mean;
//while(1){
//    scanf("%d",&a[i]);
//    sum+=a[i];
//    if(i==0){
//        mx=a[i];
//        mn=a[i];
//    }
//    if(a[i]>mx)
//        mx=a[i];
//    if(a[i]<mn)
//        mn=a[i];
//    if(i>0 and a[i]<a[i-1])
//        break;
//    i++;
//}
//mean=double(sum)/(i+1);
//printf("%lld %d %d %.2f",sum,mn,mx,mean);

//char s[3][1000]={},n;
//int f=0,mx=0;
//for(int i=0;i<3;i++){
//    scanf(" %s",&s[i]);
//    int k=0;
//    for(int j=0;j<strlen(s[i]);j++){
//        if(s[i][j]=='5' and k+1<=10){
//            k++;
//        }
//        else{
//            printf("ERROR");
//            goto End;
//        }
//
//    }
//    if(mx<=k and k!=0){
//        if(mx==k)
//            f+=(i+1)*(i+1);
//        else
//            f=(i+1)*(i+1);
//        mx=k;
//    }
//}
//switch(f){
//    case 1 : cout<<"Noon is crazy"; break;
//    case 4 : cout<<"Jane is crazy"; break;
//    case 5 : cout<<"Noon and Jane are crazy"; break;
//    case  9 : cout<<"Bow is crazy"; break;
//    case  10 : cout<<"Noon and Bow are crazy"; break;
//    case  13 : cout<<"Jane and Bow are crazy"; break;
//    case  14 : cout<<"They are crazy"; break;
//    default : cout<<"ERROR";
//    }
//End:;


//double a,b,c;
//if(scanf("%lf%lf%lf",&c,&a,&b)==3){
//if(c==0)
//    printf("1");
//else if(c<a)
//    cout<<1;
//else if(a-b<=0)
//    cout<<"Error";
//else if(a<0 or b<0 or c<0)
//    cout<<"Error";
//else{
//    double u=ceil((c-b)/(a-b));
//    printf("%.f",u);
//    }
//}
//else
//    cout<<"Error";

double a[3],b[3];
int p=0;
for(int i=0;i<3;i++){
    if(!(scanf("%lf",&a[i])  ))
        goto End;

    if(a[i]<=0.0001 or a[i]==0)
        p=1;
    b[i]=a[i];
    for(int j=0;j<i;j++){
        if(a[j]>a[i]){
            double t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
    }
}
printf("%.4f, %.4f and %.4f ",b[0],b[1],b[2]);
if(a[2]>=a[0]+a[1] or p==1){
    printf("are NOT sides of triangle.");
}
else{
        a[1]*=a[1];
        a[0]*=a[0];
        a[2]*=a[2];
        //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[0]+a[1] <<endl;
    if(abs(a[2]-a[1]-a[0])<0.0001)
        printf("are sides of RIGHT triangle.");
    else
        printf("are NOT sides of RIGHT triangle, just a TRIANGLE.");
}
End:;
}
