#include<bits/stdc++.h>
using namespace std;

int main(){

long long r,t=0,d,p;cin>>r>>d>>p;
int ans=0;

while(t<=r){

    if(t%p==0){ans++;}
    t=d+t;

}

cout<<ans;

return 0;}
