#include<iostream>
#include<string.h>
#include<math.h>
#define ll long long int
using namespace std;
int main(){
char c[10000],a;
scanf("%[^\n]",c);
int k=0;
for(int i=0;i<strlen(c);i++){
    if(isdigit(c[i])){
        if(i>0){
        for(int u=49;u<int(c[i]);u++){
            if(isalpha(c[i-1])){
                cout<<c[i-1];
            }
        }
        }
    }
    else if(c[i+1]!='0'){
        cout<<c[i];
    }
}

}
