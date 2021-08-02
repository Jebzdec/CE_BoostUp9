#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    int n;cin>>n;
    int k;char a[13][3]={"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    for(int i=0;i<n;i++){
        string c;cin>>c;
        for(int j=0;j<12;j++) (c==a[j])? k=j:1;
        int x;cin>>x;
        cout<<a[(x+k)%12]<<" ";
    }
}
