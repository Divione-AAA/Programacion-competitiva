#include<bits/stdc++.h>
using namespace std;

#define int long long

const int INF=1000000;

int n,m,k,q;
vector<vector<pair<int,int>>> adj;
deque<int> ans;

int Dijkstra(int s,int p){

vector<int> d;
d.assign(n,INF);
d[s]=0;
set<pair<int,int>> Q;
Q.insert({0, s});

    while(!Q.empty()){

        int v=Q.begin()->second;
        Q.erase(Q.begin());

        for(auto edge : adj[v]){

            int u=edge.first;
            int w=edge.second;

            if(d[v]+w<d[u]){

                Q.insert({d[u],u});
                d[u]=d[v]+w;
                Q.erase({d[u],u});

            }

        }

    }

    return d[p];

}

int32_t main(){

    cin>>n>>m>>k>>q;
    adj.resize(n);

    while(m--){

        int u,v,w;cin>>u>>v>>w;
        u--;v--;
        adj[u].push_back(make_pair(v,w));

    } 

    while(k--){

        int t;cin>>t;

    }

    while(q--){

        int a,b;cin>>a>>b;a--;b--;
        int t=Dijkstra(a,b);
        if(t!=INF){

            ans.push_front(t);
            
        }
    }

    cout<<ans.size()<<endl;

    while(!ans.empty()){

        int u=ans.back();
        cout<<u<<endl;
        ans.pop_back();

    }

return 0;}