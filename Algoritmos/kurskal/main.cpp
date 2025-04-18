#include<bits/stdc++.h>
using namespace std;

const int INF=100000;
const double pi=3.1415926535;

vector<int> parent(INF);
vector<int> ran(INF);

void make_set(int v) {
    parent[v] = v;
    ran[v] = 0;
}

long long find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (ran[a] < ran[b])
            swap(a, b);
        parent[b] = a;
        if (ran[a] == ran[b])
            ran[a]++;
    }
}

struct Edge {
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
};

int32_t main(){
    
    int n,m;cin>>n>>m;
    vector<Edge> edges;

    int cost = 0;
    vector<Edge> result;
    parent.resize(n);
    ran.resize(n);

    for (int i = 0; i < n; i++){

        make_set(i);

    }

    for(int i=0;i<m;i++){

        int u,v,w;cin>>u>>v>>w;//u--;v--;
        Edge t;
        t.u=u;
        t.v=v;
        t.weight=w;
        edges.push_back(t);

    }

    sort(edges.begin(), edges.end());

    for (Edge e : edges) {
        if (find_set(e.u) != find_set(e.v)) {
            cost += e.weight;
            result.push_back(e);
            union_sets(e.u, e.v);
        }
}

cout<<cost;

return 0;}