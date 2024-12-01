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

int dist[300][300];
int n,m,t;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m>>t;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dist[i][j] = INF;
        }
    }

    loop(i,n){
        dist[i][i]=0;
    }

    loop(i,m){
        int u,v,w;
        cin>>u>>v>>w;
        u--;v--;
        dist[u][v]=min(dist[u][v],w);
    }

    loop(k,n){
        loop(i,n){
            loop(j,n){
                if(dist[i][j]>max(dist[i][k],dist[k][j])){
                    dist[i][j]=max(dist[i][k],dist[k][j]);
                }
            }
        }
    }

    loop(i,t){
        int a,b;cin>>a>>b;a--;b--;
        cout<<(dist[a][b]==INF ? -1 : dist[a][b])<<endl;
    }

return 0;}