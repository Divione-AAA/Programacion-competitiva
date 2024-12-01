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

vector<int> ran,parent;

struct Edge{
    int u,v,weight;
    bool operator<(Edge const& other){
        return weight<other.weight;
    }
};

void make_set(int v){
    ran[v]=0;
    parent[v]=v;
}

long long find_set(int v){

    if(parent[v]==v){
        return v;
    }else{
        return parent[v]=find_set(parent[v]); 
    }
}

void union_sets(int a, int b){
    
    a=find_set(a);
    b=find_set(b);

    if(a!=b){
        if(ran[a]<ran[b]){swap(a,b);}
        parent[b]=a;
        if(ran[b]==ran[a]){
            ran[a]++;
        }
    }
}

int32_t main(){

    fast

    vector<Edge> edges;
    vector<int> tiempo;

    int n,m,kil=INF;
    cin>>n>>m;

    tiempo.resize(n);    

    loop(i,n){
        cin>>tiempo[i];
        kil=min(kil,tiempo[i]);
    }

    loop(i,m){
        int u,v,w;cin>>u>>v>>w;u--;v--;
        int t=w*2+tiempo[u]+tiempo[v];
        Edge m;
        m.u=u;
        m.v=v;
        m.weight=t;
        edges.PB(m);
    }
    parent.resize(n);
    ran.resize(n);

    loop(i,n){
        make_set(i);
    }

    sortt(edges);
    vector<Edge> result;
    int cost=0;

    for (Edge e : edges) {
    if (find_set(e.u) != find_set(e.v)) {
        cost += e.weight;
        result.push_back(e);
        union_sets(e.u, e.v);
    }
}

    cout<<cost+kil;

return 0;}