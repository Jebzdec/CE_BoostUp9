#include<stdio.h>
#include<math.h>
#include<string.h>
//char a[100000000000];
int main(){
//    scanf("%s",a);
//    printf("Hello %s \\(\"^\")/!!!",a);
//    int a,b,c;
//    scanf("%d%d%d",&a,&b,&c);
//
//    int x=pow(a,c);
//    printf("%d",x);

//int x[2],y[2];
//char a;
//for(int i=0;i<2;i++)
//    scanf("%d%c%d",&x[i],&a,&y[i]);
//x[1]=x[1]-x[0];
//y[1]=y[1]-y[0];
//x[1]*=x[1];
//y[1]*=y[1];
//float ans=sqrt(x[1]+y[1]);
//printf("%f",ans);

//double a,b;
//if(scanf("%lf %lf",&a,&b)!=2)
//printf("Error");
//else
//printf("%f = %f x %f",a*b,a,b);
//    double a,b,c;
//    int n;
//
//    if(scanf("%lf%lf%d",&a,&b,&n)==3)
//    {
//        if(n>0)
//        {
//            c=a*(pow(b/a,n-1));
//            printf("%f",c);
//        }
//        else
//            printf("ERROR");
//    }
//    else
//        printf("ERROR");

//char a[2][100];
//scanf("%s%s",a[0],a[1]);
//long long int sum=0,n,k;
//for(int i=0;i<2;i++){
//    n=strlen(a[i]);
//    for(int j=n-1;j>=0;j--){
//        if(a[i][j]>=65){
//            k=a[i][j]-87;
//        }
//        else{
//            k=a[i][j]-48;
//        }
//        sum+=k*pow(16,n-1-j);
//    }
//}
//printf("%lld",sum);
//doub r=-1;
//scanf("%f",&r);
//if(r>=0 and (22*r*r)/7!='\0'){
//    printf("%.8f",(22*r*r)/7);
//}
//else
//    printf("ERROR");
//double a,b;
//scanf("%lf%lf",&a,&b);
//if(m>0)
//printf("%.6f = %.6f x %.6f",a*b,a,b);
//else
//    printf("ERROR");
//    int A,a,b=0,k=1;
//    scanf("%d",&A);
//    a=A;
//    while(a>=8)
//    {
//        b+=(a%8)*k;
//        a=a/8;
//        k*=10;
//    }
//    b+=a*k;
//    printf("%d%d",b,A);
//
//    a=A;
//    char arr[1000000],j=0;
//    while(a>=16)
//    {
//        if(a%16>9)
//        {
//            arr[j]=(a%16)+87;
//        }
//        else
//            arr[j]=(a%16)+48;
//        a=a/16;
//        k*=10;
//        j++;
//    }
//    if(a%16>9)
//    {
//        arr[j]=(a%16)+87;
//    }
//    else
//        arr[j]=(a%16)+48;
//    for(int i=strlen(arr)-1; i>=0; i--)
//        printf("%c",arr[i]);

        int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1;i<12;i++){
        month[i]+=month[i-1];
    }
//    for(int i=0;i<12;i++)
//        printf("%d\n",month[i]);
    int d,m,y;
    scanf("%d%d%d",&d,&m,&y);
    int k;
    k=(month[m-1]+d+y*365);
    k+=(y-1)/4;
    if(y%4==0){
        if(m>=3)
            k+=1;
    }
    printf("%d",k);
    char Day[7][10]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thurseday"};
    printf("%s",Day[k%7]);

}
