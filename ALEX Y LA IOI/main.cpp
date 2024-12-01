#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b;cin>>n>>a>>b;
    string l;cin>>l;

    if(l[a-1] == l[b-1]){

        cout<<0;return 0;

    }

    for(int i=a-1;i<n;i++){

        if(l[i]!=l[a]){

            cout<<a-i;return 0;

        }


    }


return 0;}
