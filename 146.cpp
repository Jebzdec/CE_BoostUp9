#include<iostream>
using namespace std;
int main(){
    int m,x=0,y=0;
    cin>>m;
    for(int i=0;i<m;i++){
        char f;
        cin>>f;
        if(!(x<2000 and x>-2000 and y<2000 and y>-2000)){cout<<"I’m dead";goto fin;}
        if(f=='S') x+=200,y+=100;
        else if(f=='A') y+=420;
        else if(f=='I') x-=211,y-=59;
        else if(f=='O'){}
    }
    cout<<x<<" "<<y;
    fin:;
}
