#include<iostream>
#include<string.h>
#include<math.h>
#define ll long long int
using namespace std;
int main(){



    //133
//  char a[1000],b[1000];
//scanf("%s%s",&a,&b);
//int n;
//ll sum=0,j;
//if(a>b){
//    n=strlen(a);
//    j=strlen(b);
//}
//else{
//    j=strlen(a);
//    n=strlen(b);
//}
//for(int i=n-1;i>=0;i--){
//    if(j<0)
//        break;
//    ll u=(a[i]-48)*(b[j]-48);
//    sum+=u;
//    j--;
//}
//printf("%lld",sum);

    //131
//int a[10]={};
//char x[1000];
//for(int i=0;i<2;i++){
//    cin>>x;
//    for(int j=0;j<strlen(x);j++){
//            int u=x[j]-48;
//        if(i==0){
//            a[u]=1;
//        }
//        else{
//            if(a[u]==1)
//                a[u]=3;
//            else if(a[u]==0)
//                a[u]=2;
//        }
//    }
//}
//int i;
//    for(i=0;i<10;i++)
//        if(a[i]==1)
//            cout<<i;
//    cout<<endl;
//    for(i=0;i<10;i++)
//        if(a[i]==2)
//            cout<<i;
//    cout<<endl;
//    for(i=0;i<10;i++)
//        if(a[i]==3)
//            cout<<i;
//    cout<<endl;
//    for(i=0;i<10;i++)
//        if(a[i]!=0)
//            cout<<i;
//    cout<<endl;


    //107
//int a[10],b[10];
//for(int i=0;i<10;i++){
//    cin>>a[i];
//    for(int j=0;j<i;j++){
//        if(a[j]>a[i]){
//            int u=a[j];
//            a[j]=a[i];
//            a[i]=u;
//        }
//    }
//}
//for(int i=0;i<10;i++){
//    cin>>b[i];
//    for(int j=0;j<i;j++){
//        if(b[j]>b[i]){
//            int u=b[j];
//            b[j]=b[i];
//            b[i]=u;
//        }
//    }
//}
//for(int i=0;i<10;i++){
//    for(int j=0;j<10;j++)
//        if(b[i]==a[j])
//            cout<<a[j]<<endl;
//}


        //90
//    bool T=0,err=0;
//int k=0;
//float s;
//char g[100],x[5]={'F','D','C','B','A'},n[3];
//while(scanf("%s",n) and n[0]!='x'){
//    cin>>g;
//    if(!(n[0]>='0' and n[0]<='9'))
//        err=1;
//    else{
//    k+=n[0]-48;
//    for(int i=0;i<5;i++){
//        if(g[0]==x[i]){
//            if(g[1]=='+' and i!=4)
//                s+=(i+0.5)*(n[0]-48);
//            else{
//                if(strlen(g)>1)
//                    break;
//                s+=i*(n[0]-48);
//            }
//            T=1;
//        }
//    }
//    if(T==0) err=1;
//    }
//}
//if(err==0)
//printf("%.2f",floor(100*s/k)/100);
//else
//cout<<"error";
//double h,a,b,area;
//if(scanf("%lf%lf%lf",&h,&a,&b) and (ll)(h)==h and (ll)(a)==a and (ll)(b)==b and h>0 and a>0 and b>0){
//area=(a+b)*h/2;
//printf("%.6f",area);
//}
//else
//    printf("Error");

//float h,a,b,area;
//cin>>h>>a>>b;
//if(int(h)==h and int(a)==a and int(b)==b){
//    area=(a+b)*h/2;
//    printf("%.6f",area);
//}
//else
//    cout<<"Error";

//char a[1000];
//scanf("%[^\n]s",a);
//for(int i=strlen(a)-1;i>=0;i--)
//    cout<<a[i];

 //170
//long long n,k=0;
//cin>>n;
//for(int i=0;i<n;i++){
//    double x;
//    cin>>x;
//    if((long long)x%2==1 and (long long)x==x)
//        k++;
//}
//    cout<<k;

//    int a,b,c;
//    int w[501][501]={};
//cin>>a>>b>>c;
//if(b<a)
//    cout<<"No";
//else{
//    w[a][b]=1;
//    for(int j=b;j<=500;j++){
//        for(int i=a;i<=500;i++){
//            if(j+c<=500 and w[i][j]==1){
//                w[i][j+c]=1;
//                if(i+(2*c)<=500)
//                    w[i+(2*c)][j+c]=1;
//                if(i==j+c or i+(2*c)==j+c){
//                    cout<<"Yes";
//                    goto fin;
//                }
//            }
//        }
//    }
//    printf("No");
//    fin:;
//}

//    int n;
//    scanf("%d",&n);
//    if(n<2)
//        cout<<"ERROR";
//    else{
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                if((i==0 and j==0) or (i==n-1 and j==n-1))
//                    cout<<"/";
//                else if((i==0 and j==n-1) or (i==n-1 and j==0))
//                    cout<< "\\";
//                else if(i==0 or i==n-1)
//                    cout<< "-";
//                else if(j==0 or j==n-1)
//                    cout<< "|";
//                else
//                    cout<<" ";
//            }
//            if(i!=n-1)
//                cout<<endl;
//        }
//        while(--n>=0)
//            cout<<"n";
//    }

//    int a[1000],i=0,num[10]={};
//    while(scanf("%d",&a[++i]) and a[i]>=0 and a[i]<=9){
//        num[a[i]]++;
//    }
//    for(int i=0;i<=9;i++){
//        printf("%d = %d\n",i,num[i]);
//    }

//char a[1000];
//scanf("%[^\n]*c",&a);
//int n=strlen(a);
//cout<<a[0];
//for(int i=1;i<n;i++){
//    if(a[i]!=a[i-1])
//        cout<<endl;
//    cout<<a[i];
//}


//43
char a[1000];
//scanf("%s",a);
int n=strlen(a);
char b[1000];
int i=0,p[1000]={},k=0,idx;
while(scanf("%s",b) and (strcmp("stop",b)==1)){
    i=strlen(b);
    k=1;
    cout<<"i :"<<i<<" ";
    while(i>=0){
        int u=int(b[i]);
        if(u>=0 and u<=9){
            idx+=k*u;
        }
        else
            goto nex;
        k*=10;
        i--;
    }
    cout<<idx<<endl;
    nex:;
}
//for(int i=0;i<n;i++){
//    if(p[i]==0){
//        cout<<a[i];
//        k=1;
//    }
//}
//if(k==0)
//    cout<<"NOOOOOOOOOOOOOOOO!";

//int n,pk=0;
//char x;
//cin>>n;
//for(int i=0;i<n;i++){
//    cin>>x;
//    if(x=='r'){
//        pk++;
//    }
//    else if(x=='e'){
//        if(pk>0)
//            pk--;
//    }
//
//}
//cout<<pk;

//int n,mx,mn,x;
//cin>>n;
//for(int i=0;i<n;i++){
//        cin>>x;
//    if(i==0)
//        mx=x,mn=x;
//    else{
//        if(x<mn)
//            mn=x;
//        else
//            mx=x;
//    }
//
//}cout<<mx-mn;

//int q,n,x;
//cin>>n;
//int a[n+1];
//for(int i=0;i<n;i++){
//    cin>>a[i];
//    if(i-1>=0)
//    a[i]+=a[i-1];
//}
//cin>>q;
//for(int i=0;i<q;i++){
//    cin>>x;
//    for(int j=0;j<n;j++){
//        if(a[j]>=x){
//            printf("%d# Target achieved at day %d!\n",i+1,j+1);
//            goto Next;
//        }
//    }
//    printf("%d# Target failed to achieve.\n",i+1);
//    Next:;
//}

//73
//char s[1000];
//scanf("%[^\n]s",s);
//int n=strlen(s);
//for(int i=0;i<n;i++){
//    if(s[i]>='A' and s[i]<='Z')
//        cout<<s[i];
//    else if(s[i]>='a' and s[i]<='z')
//        cout<<s[i];
//    else if(s[i]>='0' and s[i]<='9')
//        cout<<s[i];
//}

//int k;
//cin>>k;
//k=k/20;
//int f=k,sum=k;
//while(k>=2 or f>=4){
//    int n;
//    n=f/4;
//    k+=n;
//    f+=n;
//    sum+=n;
//    f-=4*n;
//
//    n=k/2;
//    k+=n;
//    f+=n;
//    sum+=n;
//    k-=2*n;
//    //cout<<k<<" "<<f<<" "<<sum<<endl;
//}
//cout<<sum;


//long long int a,b,sum=0,i;
//cin>>a>>b;
//if(a>b){
//  int u=a;
//  a=b;
//  b=u;
//}
//for(i=a;i<=b;i++){
//    sum+=(i+3)*(i+3);
//}
//cout<<sum;

//long long int a,b,sum=0,i;
//cin>>a>>b;
//if(a>b){
//  int u=a;
//  a=b;
//  b=u;
//}
//for(i=a;i<=b;i++){
//    sum+=(i+3)*(i+3);
//}
//cout<<sum;

//char a[200];
//scanf("%[^\n]s",a);
//for(int i=0;i<strlen(a);i++){
//    if(islower(a[i]))
//        a[i]=toupper(a[i]);
//    else if(isupper(a[i]))
//        a[i]=tolower(a[i]);
//}
//cout<<a;

//int n,x,bf=0,mx=0;
//cin>>n;
//for(int i=0;i<n;i++){
//    cin>>x;
//    if(x>=mx){
//        bf=mx;
//        mx=x;
//    }
//    else if(x>=bf){
//        bf=x;
//    }
//}
//cout<<mx<<endl<<bf;

//double s,t;
//cin>>s>>t;
//if(s<0 or t<0)
//    printf("Error");
//else{
//    double c1=0,c2;
//    if(s>=1){
//        c1+=35;
//        s-=1;
//    }
//    float a[9]={5.5,6.5,7.5,7.5,8,8,9,9,10.5};
//    for(int i=0;i<=8;i++){
//        if(s>=9 and i==0){
//            c1+=a[i]*9;
//            s-=9;
//        }
//        else if(s>=10){
//            c1+=a[i]*10;
//            s-=10;
//        }
//        else{
//            c1+=a[i]*s;
//            break;
//        }
//    }
//    c1=ceil(c1);
//    if((long long)c1%2==0)
//        c1+=1;
//    c2=floor(2*t);
//    if((long long)c2%2==1)
//        c2-=1;
//    cout<<c1+c2;
//
//}

}
