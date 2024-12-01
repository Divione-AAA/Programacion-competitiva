#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;cin>>n;
    n=pow(n,2);

    string n1;
    stringstream flujo;
    flujo<<n;
    n1=flujo.str();

    int c=n1.size();

    if(c==8){

        for(int i=2;i<=5;i++){
            if(n1[2]=='0' && i==2 ) continue;
            cout<<n1[i];
        }

    }else{

        for(int i=1;i<5;i++){
            
            if(n1[1]=='0' && i==1 ) continue;
            cout<<n1[i];

        }
    }

    return 0;
}