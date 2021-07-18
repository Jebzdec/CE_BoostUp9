#include <iostream>
#include<string.h>

using namespace std;
int main()
{
string c;
getline(cin,c);
int n=c.size(),k1=0,k2=0,p=0,d=0,z=0;
for(int i=0;i<n;i++){
    if(c[i]>='0' and c[i]<='9'){
        if(d==0)
            k1++;
        else if(d==1){
            k2++;
            if(c[i]=='0')
                z++;
        }
    }
    else if(c[i]=='.' ){
        d++;
        if(d>1)
            break;
    }
}

if(d==0){
    if(k1+k2==n)
        printf("INTEGER !!!");
    else
        printf("STRING !!!!!");
}
else{
    if(d==1 &&  k1+k2+1==n)
        printf("FLOAT !!!!");
    else
        printf("STRING !!!!!");
}


    return 0;
}
