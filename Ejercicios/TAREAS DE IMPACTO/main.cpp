#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<int> tablero;

void range(int a,int b){

    if(a>b) swap(a,b);

    for(int i=a;i<=b;i++){

        tablero[i]++;

    }

}

int32_t main(){

    int n,k;cin>>n>>k;

    tablero.assign(k,0);

    while(n--){

        int a,b;cin>>a>>b;
        a--;b--;
        range(a,b);

    }   

    int g=0;
    int c=0;

    for(auto i: tablero){

        if(i>g){

            g=i;
            c=0;

        }

        if(i==g){

            c++;

        }

    }

    cout<<c<<endl;

return 0;}