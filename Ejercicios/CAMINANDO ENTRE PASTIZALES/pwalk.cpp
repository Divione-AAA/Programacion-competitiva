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

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj;

    for(int i=0;i<n-1;i++){

        int u,v,w;cin>>u>>v>>w;u--;v--;
        adj.push_back({u,v,w});
        adj.push_back({v,u,w});
    
    }

    while(m--){
        int src=0;cin>>src;src--;
        vector<int> dist(n,INF);
        dist[src]=0;

        for (int i=0; i<n-1; i++){
            for(auto e: adj){

                int u=e[0];
                int v=e[1];
                int w=e[2];
                dist[v]=min(dist[v],dist[u] + w);

            }
        }
            /*for(auto i: dist){
        cout<<i<<" ";}*/

        int b;cin>>b;b--;cout<<dist[b]<<endl;

    cout<<endl;
    }

return 0;}