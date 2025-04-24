#include<bits/stdc++.h>
using namespace std;

int jose(int n, int k){

    return n>1 ? (jose(n-1,k)+k-1)%n+1 : 1;
}

int main(){

    int c;cin>>c;

    while(c--){
    int p;cin>>p;
    cout<<jose(p,2)<<endl;}

return 0;}
