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

vector<int> ans;
vector<vector<int>> adj(100000);
vector<bool> visited(100000,false);
vector<bool> visitados(100000,false);

int c,n,m,answ;

void dfs(int v){

	visited[v]=true;

	for(int u: adj[v]){
		if(!visited[u]){dfs(u);}
	}
	ans.PB(v);
}

void wer(int n){

    for (int i = 1; i < n; ++i) {
        if (!visited[i])
            dfs(i);
    }

	reverse(ans.begin(), ans.end());

}

void dfs2(int v){

	visitados[v]=true;

	for(int u: adj[v]){
		if(!visitados[u]){dfs(u);}
	}

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>c;

	while(c--){

		int n,a;cin>>n>>a;
		ans.clear();
		for(int i=0; i<n; i++){
        adj[i].clear();
        visited[i] = false;
		visitados[i]=false;
   		}

		loop(i,a){
			int a,b;cin>>a>>b;//a--;b--;
			adj[a].PB(b);
		}

		wer(n);

		int as=0;

		loup(i,1,n){
			if(ans[i+1]!=ans[i]+1){
				
				//dfs2(ans[i]);
				as++;
			}
		}
		cout<<as<<endl;
	}

return 0;}