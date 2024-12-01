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

int p,f,a,b,c,t,posans=0;
vector<int> favoritos;

vector<int> dijkstra(vector<vector<pair<int,int>>>& adj,int s){

    vector<int> d;
    d.assign(p,INF);
    d[s]=0;
    set<pair<int,int>> q;
    q.insert({0,s});
    while (!q.empty()){
    
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
return d;
}

void respuesta(vector<int> d,int ii,double& ans){

    int sum=0;

    for(auto i: favoritos){
        sum+=d[i];
        //cout<<i<<" ";
    }

    //double ss=sum/f;
    //cout<<setprecision(ss)<<ss<<endl;

    if(sum<ans){
        //cout<<ss<<" "<<ii<<endl;
        ans=sum;
        posans=ii;
        //cout<<ans<<endl;
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>p>>f>>c;
    favoritos.resize(f);

    vector<vector<pair<int,int>>> adj(p);

    loop(i,f){
        cin>>favoritos[i];favoritos[i]--;
    }

    loop(i,c){
        cin>>a>>b>>t;a--;b--;
        adj[a].PB(MP(b,t));
        adj[b].PB(MP(a,t));
    }

    double ans=1000000.9999;

    loop(iterador,p){
        vector<int> d=dijkstra(adj,iterador);
        respuesta(d,iterador,ans);
        /*over(i,d) cout<<i<<" ";
        cout<<endl;*/
    }

    cout<<posans+1;

return 0;}