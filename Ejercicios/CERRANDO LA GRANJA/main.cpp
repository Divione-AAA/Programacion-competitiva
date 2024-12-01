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

vector<vector<int>> adj(200000);
int n,m,t;

vector<bool> cerrado;

bool ver(){

int c=0,u=0;

    over(i,cerrado){    
        if(i){
            u++;
        }else{
            c++;
        }
    }

return c==0;}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;
    int u,v;
    cerrado.assign(n,false);

    loop(i,m){
        cin>>u>>v;u--;v--;
        adj[u].PB(v);
        adj[v].PB(u);
    }

    int iterador=0;

    loop(i,n){

        if(ver()){break;}

        iterador++;

        over(j,adj[i]){
            cerrado[j]=true;
        }
    }

    loop(i,n){

        cin>>t;
        cout<<(t<=iterador ? "YES" : "NO")<<endl;

    }

return 0;}