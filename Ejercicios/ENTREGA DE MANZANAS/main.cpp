#include<bits/stdc++.h>
using namespace std;

const int INF=1000000;
vector<vector<pair<int,int>>> adj(100001);
int C,P,PB,PA1,PA2;

int dijkstra(int p,int s){

    vector<int> d;
    set<pair<int,int>> q;
    d.assign(P,INF);
    d[s]=0;
    q.insert({0,s});

    while(!q.empty()){

        int v=q.begin()->second;
        q.erase(q.begin());

        for(auto edge : adj[v]){
            
            int u=edge.first;
            int w=edge.second;

            if(d[v] + w < d[u]){

                q.erase({d[u],u});
                d[u]=d[v]+w;
                q.insert({d[u], u});

            }
        }
    }

    return d[p];

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>C>>P>>PB>>PA1>>PA2;
    PA1--;PA2--;PB--;
    adj.resize(P+1);

    while(C--){

        int u,v,w;cin>>u>>v>>w;
        u--;v--;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    }

    //aplicando dijkstra

    int ans1=dijkstra(PA1,PB);
    ans1+=dijkstra(PA2,PA1);

    //aplicando dijkstra

    int ans2=dijkstra(PA2,PB);
    ans2+=dijkstra(PA1,PA2); 

    //respuesta

    int ans=min(ans2,ans1);

    cout<<ans<<endl;

return 0;}
