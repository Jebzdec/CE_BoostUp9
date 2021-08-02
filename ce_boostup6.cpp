#include<iostream>
#include<string.h>
#include<math.h>
#define ll long long int
using namespace std;
int a=0,b=0,op[1000]={};
void func(int idx,int x,int i){
    a[idx]=x%2;
    x=x/2;
    if(x>0) func(idx,x,i+1);
}
int main()
{
    int x,y;
    cin>>x>>y;
    func(0,x,0);
    func(1,y,0);
    int i=strlen(a)-1,j=strlen(b)-1,k=0;
    int mx=i>j? i:j;
    while(i>0 and j>0){
        if(a[i]==b[j]) op[k]=1;
        i--;
        j--;
        k++;
    }
    for(int i=strlen(op);i>=0;i--){
        cout<<op[i];
    }
    //86
//int n,i,k[12]={31,29,31,30,31,30,31,31,30,31,30,31};
//char d[7][4]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"},
//m[12][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
//cin>>n;
//cout<<d[n%7];
//for(i=0;i<12;i++){
//    if(n-k[i]>0)
//        n-=k[i];
//    else break;
//}printf(" %d %s",n,m[i]);

    //164
//int n,m,k;
//cin>>n;
//m=(n*2)-1;
//k=n-1;
//for(int i=0;i<n;i++){
//    for(int j=0;j<m;j++){
//        if(j<k or j>m-k){
//            cout<<" ";
//        }
//        else{
//            if((i+n)%2!=j%2){
//                cout<<char((i%26)+65);
//            }
//            else cout<<" ";
//        }
//    }
//    if(i!=n-1)
//    cout<<endl;
//    k--;
//}

    //98
//    int n,w;
//    cin>>n;
//    float s,cost=0,k;
//    for(int i=0;i<n;i++){
//        cin>>w>>s;
//        cost+=s*w;
//    }
//    if(cost>=400)
//        k=cost*0.1;
//    else if(cost>=200)
//        k=cost*0.05;
//    if(k>200)
//        k=200;
//    printf("%.2f",cost-k);


    //133
//  char a[1000],b[1000];
//scanf("%s%s",&a,&b);
//int n;
//ll sum=0,j;
//if(a>b){
//    n=strlen(a);
//    j=strlen(b)-1;
//}
//else{
//    j=strlen(a)-1;
//    n=strlen(b);
//}
//for(int i=n-1;i>=0;i--){
//    if(j<0)
//        break;
//    int x=int(a[i])-48,y=int(b[j])-48;
//    if(!(x>=0 and x<=9 and y>=0 and y<=9)){
//        goto End;
//        break;
//    }
//    ll u=x*y;
//    sum+=u;
//    j--;
//}
//printf("%lld",sum);
//End:;

//    int n,x;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>x;
//        int k=0;
//        for(int j=1;j<x;j++){
//            if(x%j==0)
//                k+=j;
//        }
//        if(k>x)
//            cout<<"A";
//        else if(k==x)
//            cout<<"P";
//        else cout<< "D";
//    }

   //90
//bool T=0,err=0;
//int k=0,cnt=0;
//float s;
//char g[100],x[5]={'F','D','C','B','A'},n[1000];
//while(scanf("%s",n) and( n[0]!='x' or strlen(n)!=1)){
//    cin>>g;
//    int v=0,siz=strlen(n),u=1;
//    for(int k=siz-1;k>=0;k--){
//        v+=((int(n[k])-'0')*u);
//            u*=10;
//    }
//    if(v<=0)
//        err=1;
//    else{
//    cnt+=v;
//    for(int i=0;i<5;i++){
//        if(g[0]==x[i]){
//            if(g[1]=='+' and i!=4)
//                s+=(i+0.5)*v;
//            else{
//                if(strlen(g)>1)
//                    break;
//                s+=i*v;
//            }
//            T=1;
//        }
//    }
//    if(T==0)
//        err=1;
//    }
//}
//if(err==0)
//printf("%.2f",floor(100*s/cnt)/100);
//else
//cout<<"error";


    //43
//bool print[1000];
//char a[1000],del[100];
//cin>>a;
//int n=strlen(a),p=0;
//while(scanf("%s",&del)){
//        if(strcmp("stop",del)==0)
//            break;
//    int idx=0,k=1;
//    for(int i=strlen(del)-1;i>=0;i--){
//        idx+=k*(del[i]-48);
//        k*=10;
//    }
//    if(idx>=0 and idx<n){
////     cout<<idx<<endl;
//        print[idx]=1;
//    }
//}
//for(int i=0;i<n;i++){
//    if(print[i]==0){
//        cout<<a[i];
//        p=1;
//    }
//}
//if(p==0)
//cout<<"NOOOOOOOOOOOOOOOO!";


// int x,y,z;
//cin>>x>>y>>z;
//if((z==0 and x!=y)){
//cout<<"Go to hell";
//goto End;
//}
//if(x<y)
//while(x<y){
//    if(y-(x+z)<y-x){
//        cout<<x<<endl;
//        x+=z;
//    }
//    else{
//        cout<<"Go to hell";
//        goto End;
//    }
//}
//else if(x>y)
//while(x>y){
//    if(y-(x+z)>y-x){
//        cout<<x<<endl;
//        x+=z;
//    }
//    else{
//        cout<<"Go to hell";
//        goto End;
//    }
//}
//if(x>=y)
//    cout<<y;
//End:;


//long long n,k=0,x;
//cin>>n;
//for(int i=0;i<n;i++){
//    cin>>x;
//    if(x%2==1 ||x%2==-1)
//        k++;
//}
//    cout<<k;
}
