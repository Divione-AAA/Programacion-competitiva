#include<bits/stdc++.h>
using namespace std;

int main(){

int c;cin>>c;

while(c--){

    string n;cin>>n;

    int r=0;

    for(unsigned int i=0;i<n.size();i++){

    int j=n[i]-'0';

    r=r+j;

    }
    cout<<r<<endl;
}

return 0;}
