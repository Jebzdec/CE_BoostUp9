#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#include<ctype.h>
#define ll long long int
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int i=0,j=a.size()-1,k=0;
    while(i<a.size() and j>=0){
        while(isalnum(a[i])==0) i++;
        while(isalnum(a[j])==0) j--;
        if(!(i<a.size() and j>=0)) break;
        if(tolower(a[i])==tolower(a[j]))
            true;
        else{
            k++;
        }
        i++;
        j--;
    }
    cout<<'\"'<<a<<'\"'<<" is ";
    (k==0)? cout<<"PALINDROME.":cout<<"NOT palindrome.";
}
