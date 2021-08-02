#include<iostream>
#include<string.h>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
int c;
cin>>c;
for(int i=2;i<=16;i++){
    int k=0,x=int(c);
    cout<<i<<" ";
    int a[11]={};
    while(x>0){
        a[k]=x%i;
        x=x/i;
        k++;
    }
    for(int j=k-1;j>=0;j--)
        cout<<a[j];
    cout<<endl;
}
}
