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

int maximo=0;
vector<bool> adjv(10000,false);

void dfs(vector<vector<int>> &adj, int s,int u){

    if(u==0){return;}
    //cout<<u<<" ";
    maximo=max(maximo,s);
    adjv[u]=true;

    for(auto v: adj[u]){
        if(!adjv[v]){
            //cout<<v<<" ";
            dfs(adj,s+1,v);
        }
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n;cin>>n;

    vector<vector<int>> adj(n+1);

    int a,b,c;

    loop(i,n-1){
        cin>>a>>b>>c;
        adj[a].PB(b);
        adj[a].PB(c);
    }

    dfs(adj,1,1);

    cout<<maximo;

return 0;}