#include<bits/stdc++.h>
using namespace std;

int main(){

int c;cin>>c;

while(c--){

    int a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;

    int f=a1*a2,s=b1*b2;

    cout<<(f>=s ? f : s)<<endl;

}


return 0;}
