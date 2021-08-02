#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    int a=0,b=0,p=0,t;
    for(int i=0;i<3;i++){
        int x;
        char c;
        for(int j=0;j<3;j++){
            cin>>x;
            if(j<2) cin>>c;
            if(j==0) x*=3600;
            else if(j==1) x*=60;
            if(i==0) a+=x;
            else if(i==1) b+=x;
            else if(i==2) p+=x;
        }
    }
    if(a<b) a+=24*60*60;
    t=a-b;
    if(t/3600<10) cout<<"0";
    cout<<t/3600<<":";
    t-=3600*(t/3600);
    if(t/60<10) cout<<"0";
    cout<<t/60<<":";
    t-=60*(t/60);
    if(t<10) cout<<"0";
    cout<<t<<endl;
    (a-b>=p)? cout<<"Nasus Win!!!":cout<<"Renekton Win!!!";
}
