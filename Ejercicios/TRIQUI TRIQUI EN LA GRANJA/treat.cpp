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

vector<vector<int>> adj(1000000);
vector<int> juntos;
vector<bool> visitados;
vector<bool> usados;
vector<int> ender;
int n,t,ans=0;

void dfs(int n){

    usados[n]=true;
    juntos.PB(n);
    ans++;

    over(i,adj[n]){
        if(!usados[i]){
            dfs(i);
        }
    }
}

void respuestas(int n){
    
    ans=0;
    usados.assign(n,false);
    dfs(n);
    ender[n]=ans;

}

int32_t main(){
	
	fast
	//freopen("treat.in", "r", stdin);freopen("treat.out", "w", stdout);

    cin>>n;
    usados.assign(n,false);
    visitados.assign(n,false);
    ender.resize(n);

    loop(i,n){
        cin>>t;t--;adj[i].PB(t);
    }

    loop(i,n){
        respuestas(i);
    }

    over(i,ender){
        cout<<i<<endl;
    }

return 0;}