#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define loopi(i,n) for(int i=0;i<=n;i++)
#define lup(i,x,n) for(int i=x;i<=n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
#define over(i,a) for(auto i: a)

using namespace std;

int main(){

    fast

    vector<int> num;
    int n;cin>>n;

    loop(i,n){

    int t;cin>>t;
    num.push_back(t);

    }

    int x;cin>>x;

    over(i,num){

    if(i%x==0) cout<<i<<" ";
    else cout<<"X"<<" ";
    }

return 0;}
