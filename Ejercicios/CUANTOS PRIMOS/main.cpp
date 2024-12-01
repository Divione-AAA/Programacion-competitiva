#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    for (int d=2;d<=x;d++) {
        if (x%d==0){return false;}
}

return true;}

int main(){

int c;cin>>c;

while(c--){

    int t,ans=0;cin>>t;

    for(int i=2;i<=t;i++){

        if(isPrime(i)&&t%2==0){
            ans++;
            }
        }
    cout<<ans<<endl;
}
return 0;}
