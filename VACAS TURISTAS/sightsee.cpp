#include<bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define loopi(i,n) for(int i=0;i<=n;i++)
#define lup(i,x,n) for(int i=x;i<=n;i++)
#define loup(i,x,n) for(int i=x;i<n;i++)
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
#define sortt(a) sort(a.begin(),a.end())

const int INF=100000;
const double pi=3.1415926535;

int n,m;
vector<int> diversion;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

    loop(i,n){
        int t;cin>>t;diversion.PB(t);
    }

    vector<vector<int>> mapa(n);

    loop(i,m){
        int u,v,w;cin>>u>>v>>w;u--;v--;w+=diversion[u]+diversion[v];
        mapa.PB({u,v,w});
    }

    vector<int> dist(n);
    dist[0]=0;
    bool cycle;
    int ans=INF;

    loop(i,n-1){
        cycle=false;
        for(auto e: mapa){

            int u=e[0];
            int v=e[1];
            int w=e[2];
            if(dist[v]<dist[u]+w){ans=min(ans,dist[v]);cycle=true;}
            dist[v]=max(dist[v],dist[u]+w);

        }
    }

    cout<<ans;

return 0;}