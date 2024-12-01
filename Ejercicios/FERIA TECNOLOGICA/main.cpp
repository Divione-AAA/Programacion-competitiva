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

int32_t main(){

    fast

    int n,m,t;cin>>n>>m>>t;
    vector<vector<int>> adj(n);
    vector<vector<int>> d(n);

    loop(i,n){

        adj[i].assign(n,INF);
        d[i].assign(n,INF);

    }

    loop(i,m){

        int u,v,w;cin>>u>>v>>w;u--;v--;
        adj[u][v]=min(adj[u][v],w);
        d[u][v]=min(d[u][v],w);

    }

    n=adj.size();

    loop(i,n){
        d[i][i]=0;
        adj[i][i]=0;
    }
   
    loop(k,n){
        loop(i,n){
            loop(j,n){
                if(d[i][j] > max(d[i][k],d[k][j])){
                    d[i][j] = max(d[i][k],d[k][j]);
                }
            }
        }
    }

    loop(i,t){
        int a,b;cin>>a>>b;a--;b--;

        if(d[a][b]==INF) cout<<-1<<endl;
        else cout<<d[a][b]<<endl;

    }

return 0;}