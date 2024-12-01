#include<bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define loopi(i,n) for(int i=0;i<=n;i++)
#define lup(i,x,n) for(int i=x;i<=n;i++)
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
#define sortt(a); sort(a.begin(),a.end.())

const int INF=100000;
const double pi=3.1415926535;

bool Rellenar(){
    
    int n,m,l;
    cin>>n>>m>>l;
    vector<vector<int>> adj;

    for(int i=0;i<m;i++){

        int u,v,w;cin>>u>>v>>w;u--;v--;
        adj.push_back({u,v,w});
        adj.push_back({v,u,w});
            
    }

    for(int i=0;i<l;i++){

        int u,v,w;cin>>u>>v>>w;u--;v--;w=w*-1;
        adj.push_back({u,v,w});
    
    }

        int src=0;//cin>>src;
        vector<int> dist(n,INF);
        dist[src]=0;

        bool change;

        for (int i=0; i<n-1; i++){
            change = false;
            for(auto e: adj){

                int u=e[0];
                int v=e[1];
                int w=e[2];
                if(dist[v]>dist[u]+w){change = true;}
                dist[v]=min(dist[v],dist[u] + w);

            }
            
        }

        return change;
        
}

int32_t main(){

    int c;cin>>c;

    while (c--){
        
        cout<<(Rellenar() ? "yes" : "no")<<endl;

    }
    fgd.k;
    
return 0;}