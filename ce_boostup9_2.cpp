#include <iostream>

#include<math.h>
#include<string.h>
using namespace std;
int main(){

//    int A,a,b=0;
//    scanf("%d",&A);
//    for(int run=0;run<2;run++){
//        for(int i=2;i<=16;i++){
//                cout<<i<<" : ";
//        a=A;
//        char arr[1000000]={};
//        int k=1,j=0;
//        while(a>=i)
//        {
//            if(a%i>9)
//            {
//                arr[j]=(a%i)+87;
//            }
//            else
//                arr[j]=(a%i)+48;
//            a=a/i;
//            k*=10;
//            j++;
//        }
//        if(a%i>9)
//        {
//            arr[j]=(a%i)+87;
//        }
//        else
//            arr[j]=(a%i)+48;
//        for(int l=strlen(arr)-1; l>=0; l--)
//            printf("%c",arr[l]);
////        if(i==8)
////            printf("%d",A);
//       cout<<endl; }
//        //A+=8;
//    }

//    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//    int dayM[13]={};
//    dayM[0]=0;
//    for(int i=1;i<=13;i++){
//        dayM[i]+=month[i-1]+dayM[i-1];
//    }
//    int d,m,y;
//    scanf("%d%d%d",&d,&m,&y);
//    if(m==2 and y%4==0)
//        month[m]=29;
//    if(d>month[m] || d<1|| m>12 || m<1 ||y<0)
//        printf("ERROR");
//    else{
//        long long int k;
//        k=(dayM[m]+d+(y*365));
//        k+=(y-1)/4;
//        if(y%4==0){
//            if(m>=3)
//                k+=1;
//        }
//        //printf("%d",k);
//        char Day[7][10]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thurseday"};
//        printf("%s",Day[k%7]);
//    }

//float w;
//if(scanf("%f",&w)==1 and w>0 and w-int(w)==0){
//    int k=ceil(w/2);
//    int week=k/7,d=k%7;
//    printf("Takes about %d weeks %d days",week,d);
//}
//else
//    printf("ERROR");

//float x1,x2,y1,y2;
//char c;
//scanf("%f%f %c%f%f",&x1,&y1,&c,&x2,&y2);
//float m=(y2-y1)/(x2-x1);
//printf("y=%.2fx+%.2f",m,y1-(x1*m));

//char n[100000];
//printf("Hello ");
//cin>>n;
//printf("%s \\(\"\^\")/!!!",n);
//long long int m,n;
//scanf("%lld%lld",&m,&n);
//if(m>0 &&n>=0)
//printf("%lld",(m-1)*n);
//else if(m==0)
//    printf("0");

//int r;
//scanf("%d",&r);
//double v=(3.1415926535897932384626433*4*r*r*r)/3;
//printf("%.8f",v);

//int a,b;
//scanf("%d%d",&a,&b);
//int c=a+b;
//int k=0;
//while(c>0){
//    c=c/10;
//    k++;
//}
//printf("%d",k);

//double a;
//if(scanf("%lf",&a)==1 ){
//    if(int(a)==a)
//        printf("INTEGER !!!");
//    else
//       printf("FLOAT !!!!");
//}
//else
//    printf("STRING !!!!!");

//string c;
//getline(cin,c);
//int n=c.size(),k=0,p=0;
//for(int i=0;i<n;i++){
//    if(c[i]>='0' and c[i]<='9')
//        k++;
//    else if(c[i]=='.' && i!=0 && i!=n-1)
//        continue;
//    else{
//        printf("STRING !!!!!");
//        p=1;
//        break;
//    }
//}
//if(p==0){
//    if(k==n)
//        printf("INTEGER !!!");
//    else if(k==n-1)
//       printf("FLOAT !!!!");
//}


//    double a;
//    long long int b;
//    if(scanf("%lf",&a)==1 )
//    {
//        b=a;
//        if(b==a)
//        {
//            if(b%2==0)
//                printf("even");
//            else
//                printf("odd");
//        }
//        else
//            printf("Error");
//    }
//    else
//        printf("Error");

//int a,f=0;
//scanf("%d",&a);
//for(int i=3;i<=7;i+=2){
//    if(a%i==0)
//        f+=i;
//}
//int sum[8]={0,3,5,8,7,10,12,15};
//for(int i=0;i<8;i++){
//    if(f==sum[i])
//        printf("%d",i);
//}

//float a;
//if(scanf("%f",&a)==1 and int(a)==a){
//    for(int i=1;i<=12;i++){
//        printf("%.f x %d = %.f\n",a,i,a*i);
//    }
//}
//else{
//    printf("Error");
//}

//int a,b,sum=0;
//scanf("%d%d",&a,&b);
//if(a>b){
//    int t=a;
//    a=b;
//    b=t;
//}
//for(int i=a;i<=b;i++){
//    sum+=i;
//}
//printf("%d",sum);

//    double x;
//    long long a;
//    if(scanf("%lf",&x)==1 and x>0)
//    {
//        a=x;
//        if(a==x){
//        if(a%4==0)
//            printf("366");
//        else
//            printf("365");
//        }
//        else
//        printf("error");
//    }
//    else
//        printf("error");

//    char a[100000];
//    scanf("%s",&a);
//    int n=strlen(a);
//    int k=1;
//    long long sum=0;
//    for(int i=n-1;i>=0;i--){
//        if(a[i]>='0' and a[i]<='9'){
//            sum+=k*(a[i]-48);
//            k*=10;
//        }
//        else{
//            printf("error");
//            break;
//        }
//        //cout << sum<<endl;
//    if(i==0){
//        if(sum%4==0)
//            printf("366");
//        else
//            printf("365");
//    }
//    }

//int a;
//scanf("%d",&a);
//if(a<0 || a >99)
//    printf("ERROR");
//else
//for(int i=a-2;i<=a+2;i++){
//    printf("%d + %d = %d\n",i,i,i+i);
//}

//long long int a,b;
//scanf("%lld %lld",&a,&b);
//a=sqrt(a);
//printf("%lld",a*a*b*b);

//char str[10000];
//scanf("%[^\n]%*c",str);
//int n=strlen(str),f=0;
//for(int i=0;i<n;i++){
//    if(str[i]=='4'){
//        if(f==0 ||f==2)
//            f+=1;
//    }
//    else if(str[i]=='8'){
//        if(f==1 ||f==0)
//            f+=2;
//    }
//    //cout<<str[i];
//}
////cout<<f;
//            if(f==0)
//                printf("GET OUT!!!");
//            else if(f==3)
//                printf("PHAROAH NEVER DIE");
//            else if(f==2 )
//                printf("YOU CAN PASS PYRAMID!!!");

//int a,b;
//char c;
//scanf("%d%d%d",&a,&b,&c);
//if(b==15)
//    printf("Wan Pra Yai");
//else
//    printf("Normal Day");

//char str[100000];
//scanf("%[^\n]*c",str);
//int n=strlen(str),m=strlen(str);
//int d=0,k1=0,k2=0,z=0,i=0;
//if(str[0]=='-'){
//    i=1;
//    n-=1;
//}
//for(i;i<m;i++){
//    if(str[i]>='0' and str[i]<='9'){
//        if(d==0)
//            k1++;
//        else{
//            k2++;
//            if(str[i]=='0')
//                z++;
//        }
//    }
//    else if(str[i]=='.')
//        d=1;
//}
//if(k1+k2==n)
//    printf("INTEGER !!!");
//else{
//    if(str[0]=='.' or str[n-1]=='.')
//        printf("STRING !!!!!");
//    else if(k1+k2+1==n and d==1){
//        if(z==k2)
//            printf("INTEGER !!!");
//        else
//            printf("FLOAT !!!!");
//    }
//    else
//        printf("STRING !!!!!");
//}

//char a[10000];
//scanf("%[^\n]*c",a);
//printf("Hello %s \(\"^\")/!!!",a);

//long long int a,b;
//if(scanf("%lld%lld",&a,&b)==2 and a>=0 and b>=0){
//long long int k=sqrt(a);
//b=b*b;
//k=(a/k)*k;
//printf("%lld",k*b);
//}
//else
//    printf("Error");

//long long int h,a,b;
//double area;
//if(scanf("%lld%lld%lld",&h,&a,&b) and long(h)==h and int(a)==a and int(b)==b and h>0 and a>0 and b>0){
//area=(a+b)*h/2;
//printf("%.6f",area);
//}
//else
//    printf("Error");

//int a[3];
//for(int i=0;i<3;i++){
//    scanf("%d",&a[i]);
//    for(int j=0;j<i;j++){
//        if(a[i]<a[j]){
//            int u=a[i];
//            a[i]=a[j];
//            a[j]=u;
//        }
//    }
//
//}printf("%d",a[1]);

//long long f[10000];
//float a;
//f[0]=1;
//f[1]=1;
//if(scanf("%f",&a) and a>0 and int(a)==a){
//for(int i=2;i<a;i++)
//    f[i]=f[i-1]*i;
//
//printf("%lld",f[int(a)-1]);
//}
//else
//    printf("ERROR");

//    char num[10000];
//    scanf("%s",num);
//    int n=strlen(num),k=0;
//    for(int i=0; i<n; i++)
//    {
//        if(num[i]>='0' and num[i]<='9')
//            k++;
//    }
//    if(k==n or (num[0]=='-' and k+1==n))
//        printf("TRUE");
//    else
//        printf("FALSE");

//char id[15],name[15],ct[15];
//scanf(" %[^\n]*c ",&id);
//scanf(" %[^\n]*c ",&name);
//scanf(" %[^\n]*c ",&ct);
//printf("++++++++++++++++++++++++++++++++++++++++\n");//40
//printf("+                                      +\n");
//printf("+             id: %s",id);//18
//for(int i=1;i<22-strlen(id);i++)
//    printf(" ");
//printf("+\n");
//printf("+           NAME: %s",name);
//for(int i=1;i<22-strlen(name);i++)
//    printf(" ");
//printf("+\n");
//printf("+       category: %s",ct);
//for(int i=1;i<22-strlen(ct);i++)
//    printf(" ");
//printf("+\n");
//printf("+                                      +\n");
//printf("++++++++++++++++++++++++++++++++++++++++\n");

//char a[10000];
//bool f[10000];
//int k=1;
//scanf("%s",a);
//for(int i=strlen(a)-2;i>0;i--){
//    if(k%3==2 and a[i-1]!='-' and a[i]!='-')
//        f[i]=1;
//        k++;
//}
//for(int i=0;i<strlen(a);i++){
//    if(f[i]==1)
//        printf(",");
//    printf("%c",a[i]);
//}


    return 0;
}

