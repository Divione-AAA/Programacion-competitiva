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

vector<vector<int>> adj(10005);
vector<int> ans;
int n;

void dfs(int destino, int m,int maximo,vector<bool> &v){
    
    int maxi=max(maximo,destino);

    if(destino>m){
        ans[maxi]++;
    }

    v[destino]=true;

    for(auto i: adj[destino]){
        if(!v[i]){
            dfs(i,m,maxi,v);
        }
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    ans.assign(n,0);

    int a,b;

    loup(i,1,n){

        cin>>a>>b;a--,b--;
        adj[a].PB(b);
        adj[b].PB(a);
    }

    loop(i,n){
        vector<bool> v(n,false);
        dfs(i,i,i,v);
    }

    over(i,ans){
        cout<<i<<" ";
    }

return 0;}