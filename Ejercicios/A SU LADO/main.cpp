#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b,c,d;cin>>a>>b>>c>>d;

a+=b;
int i=0;

while(a>c*d){

    a=a+b;
    c=c+c;
    i++;
    if(a>100000 || b>100000){cout<<-1;return 0;}
}

cout<<i+1;

return 0;}
