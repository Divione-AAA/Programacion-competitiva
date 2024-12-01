#include<bits/stdc++.h>
using namespace std;

const int INF=100000;

int32_t main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj;

    for(int i=0;i<m;i++){

        int u,v,w;cin>>u>>v>>w;u--;v--;
        adj.push_back({u,v,w});
        adj.push_back({v,u,w});
    
    }

    int src=0;cin>>src;
    vector<int> dist(n,INF);
    dist[src]=0;

    for (int i=0; i<n-1; i++){
        for(auto e: adj){

            int u=e[0];
            int v=e[1];
            int w=e[2];
            dist[v]=min(dist[v],dist[u] + w);

        }
    }
    
    for(auto i: dist){
        cout<<i<<" ";
    }

    cout<<endl;

    for(auto i: dist){
        cout<<i<<" ";
    }

return 0;}