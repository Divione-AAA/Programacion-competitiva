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

const int INF=4294967296;
const int _INF=-4294967296;
const double pi=3.1415926535;

int n,m,u,v,w;
int a[100000]={-1};
vector<vector<pair<int,int>>> adj(100000);

int dijkstra(int s){
    
    vector<int> d(n,INT_MAX);
    d[s]=0;
    set<pair<int,int>> q;
    q.insert({0,s});
    int r=INT_MAX;

    while(!q.empty()){
        int v=q.begin()->second;
        q.erase(q.begin());

        for(auto edge: adj[v]){
            int u=edge.first;
            int w=edge.second;

            if(d[v]+w<d[u]){
                q.erase({d[u],u});
                d[u]=d[v]+w;
                q.insert({d[u],u});
            }
        }
    }

    loop(i,d.size()){
        
        if(a[s]!=i){
            r=min(r,2*d[i]+a[i]);
        }
    }
    return r;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

    loop(i,m){
        cin>>u>>v>>w;
        u--,v--;
        adj[u].PB({v,w});
        adj[v].PB({u,w});
    }

    loop(i,n){
        cin>>a[i];
    }

    loop(i,n){
        cout<<dijkstra(i)<<" ";
    }

return 0;}