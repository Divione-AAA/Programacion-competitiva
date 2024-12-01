#include<bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define loopi(i,n) for(int i=0;i<=n;i++)
#define lup(i,x,n) for(int i=x;i<=n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define int long long
#define double long double
#define endl '\n'
#define over(i,a) for(auto i: a)
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define PF push_front
#define INS insert
#define sortt(a); sort(a.begin(),a.end.())

const int INF=100000;
const double pi=3.1415926535;

int n,m;
vector<vector<pair<int,int>>> adj;
vector<int> money;

int32_t main(){

    cin>>n>>m;
    adj.resize(n);

    loop(i,m){

        int u,v,w;cin>>u>>v>>w;
        adj[u].PB(MP(v,w));
        adj[v].PB(MP(u,w));

    }

    loop(i,n){

    }
    


return 0;}