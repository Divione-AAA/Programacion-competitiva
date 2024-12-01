/*BAD*/
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

vector<vector<pair<int,int>>> graph(1000);

int Dijkstra(int s,int d,int n){

    int src=s;
    cout<<s<<" "<<d<<endl;
    set<pair<int,int>> q;
    vector<int> dist;
    q.insert({0,s});
    dist.assign(n,INF);
    dist[s]=0;

    while(!q.empty()){

        int v=q.begin()->second;
        q.erase(q.begin());

        for(auto edge: graph[v]){

            int u=edge.first;
            int w=edge.second;

            if(dist[u]>dist[v]+w){
                q.erase({dist[u],u});
                dist[u]=dist[v]+w;
                q.insert({dist[u],u});
            }
        }
    }
    return dist[d];
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n,m,k;cin>>n>>m>>k;
    bool truely[n+1][n+1]={false};
    deque<int> ans;

    loop(i,m){
        int u,v,w;cin>>u>>v>>w;
        truely[u][v]=true;
        truely[v][u]=true;
        graph[u].PB({v,w});
        graph[v].PB({u,w});
    }

    loop(i,n){
        truely[i+1][i+1]=true;
    }

    int p;

    loop(i,n){
        loop(j,n){
            if(!truely[i+1][j+1] && !truely[j+1][i+1]){
                truely[i+1][j+1]=true; 
                truely[j+1][i+1]=true;
                p=Dijkstra(i+1,j+1,n+1);
                ans.PB(p);
            }
        }
    }

    over(i,ans) cout<<i<<" ";

return 0;}