#include<bits/stdc++.h>
using namespace std;

#define int long long 

vector<int> m;
vector<int> o;

void sort(int p){

sort(m.begin()+p-1,m.begin()+p+2);

}

int32_t main(){

    int s;cin>>s;
    o.resize(s);
    m.resize(s);

    for(int i=0;i<s;i++){int t; cin>>t; o[i]=t; m[i]=t;}

    sort(o.begin(),o.end());

    int k=s-1;

    while(k--){

        if(o==m)cout<<"YES";return 0;

        for(int i=1;i<m.size();i++){

            if(m[i-1]>m[i] && m[i]>m[i+1] ){
                
                sort(i);

            }
        }
    }

    /*for(auto i: m){

        cout<<i<<" ";

    }*/

    cout<<((o==m) ? "YES" : "NO")<<endl;

return 0;}