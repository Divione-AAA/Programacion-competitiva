#include<bits/stdc++.h>
using namespace std;

const int INF=1000000;

int main(){

    int n,a;cin>>n>>a;
    vector<vector<pair<int, int>>> adj(n+1);

    while(a--){

        int n,u,w;cin>>n>>u>>w;
        n=n-1;u=u-1;
        adj[n].push_back(make_pair(u,w));
        adj[u].push_back(make_pair(n,w));

    }

vector<int> d;
d.assign(n, INF);
int s;cin>>s;
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

for(int i=0;i<n;i++){

    cout<<i+1<<": "<<d[i]<<endl;

}

return 0;}
