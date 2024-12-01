#include<bits/stdc++.h>
using namespace std;

void s(int a,int b,vector<int>& d){

int g=0,p=10^6;

for(int i=a;i<=b;i++){

    g=max(g,d[i]);
    p=min(p,d[i]);

    }

    cout<<g-p<<endl;

}

int main(){

int n,c;cin>>n>>c;

vector<int> d(n+1);

for(int i=1;i<=n;i++){

    cin>>d[i];

}


while(c--){

    int a,b;cin>>a>>b;
    s(a,b,d);

}

return 0;}
