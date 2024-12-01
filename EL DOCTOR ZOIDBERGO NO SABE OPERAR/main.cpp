#include<bits/stdc++.h>
using namespace std;

int main(){

long long n;cin>>n;

vector<long long> organismo(n+5);

for(int i=0;i<n;i++){

    cin>>organismo[i];

}

int v1=0,v2=0;

for(int i=0;i<n;i++){

    v1=organismo[i]+v1;
    v2=v2+i+1;

}

if(v1!=v2){

    cout<<"NO"<<endl;return 0;

}


for(int i=0;i<n;i++){

    if(organismo[i]==i+1){

        continue;

    }else if(organismo[i]>i+1 && i!=n){

        organismo[i+1]=organismo[i]-i+1;
        organismo[i]=i+1;

    }else if(organismo[i]<i+1){

        cout<<"NO"<<endl;return 0;

    }
}

for(int i=0;i<n;i++){

    if(organismo[i]!=i+1){
        //cout<<organismo[i]<< " ";
        cout<<"NO"<<endl;return 0;
    }
}

cout<<"YES"<<endl;

return 0;}
