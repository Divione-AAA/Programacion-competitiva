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

int n,m,u,v,id=1,c,a,b;
bool visited[100000]={false};
vector<int> mark(INF);

void dfs(int v,vector<vector<int>>& adj){

    visited[v] = true;
    mark[v]=id;
    //cout<<v<<endl;
    for (int u : adj[v]) {
        if (!visited[u]){
            dfs(u,adj);
        }
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m>>c;

    vector<vector<int>> adj(n);

    loop(i,m){
        cin>>u>>v;u--;v--;
        adj[u].PB(v);
        adj[v].PB(u);
    }

    /*loop(i,n+1){
        over(j,adj[i]){
            cout<<i<<" ";
        }
        cout<<endl;
    }*/


    loop(i,n){
        if(!visited[i]){
            id++;
            dfs(i,adj);
        }
    }

    loop(i,c){
        cin>>a>>b;a--;b--;
        cout<<(mark[a]==mark[b] ? "Y" : "N")<<endl;
    }

    //cout<<"ok";

return 0;}