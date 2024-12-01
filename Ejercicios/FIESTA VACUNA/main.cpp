#include<bits/stdc++.h>
using namespace std;

const int INF=1000000;

int main(){

    int n,m,s;cin>>n>>m>>s;
    vector<vector<pair<int,int>>> adj(n+1);
    s=s-1;

    while(m--){

        int x,y,z;cin>>x>>y>>z;
        x=x-1;y=y-1;
        adj[x].push_back(make_pair(y,z));
        adj[y].push_back(make_pair(x,z));

    }
vector<int> d;
d.assign(n, INF);
d[s] = 0;
set<pair<int, int>> q;
q.insert({0, s});
while (!q.empty()) {
    int v = q.begin()->second;
    q.erase(q.begin());

    for (auto edge : adj[v]) {
        int u = edge.first;
        int w = edge.second;

        if (d[v] + w < d[u]) {
            q.erase({d[u], u});
            d[u] = d[v] + w;
            q.insert({d[u], u});
        }
    }
}

    int mm=0;

for(int i=0;i<n;i++){

    mm=max(mm,d[i]);
    //cout<<d[i]<<" ";

}

cout<<mm*2;

return 0;}
