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

vector<int> parent,ran;

struct Edge{
    int u,v,weight;
    bool operator<(const Edge& other){
        return weight<other.weight;
    }
};

void make_set(int v){

    parent[v]=v;
    ran[v]=0;

}

int find_set(int v){

    if(parent[v]==v) return v;
    else return parent[v]=find_set(parent[v]);

}

void union_set(int a,int b){

    a=find_set(a);
    b=find_set(b);

    if(a!=b){
        if(ran[a]<ran[b]) swap(a,b);
        parent[b]=a;
        if(ran[a]==ran[b]) ran[a]++;
    }

}

int32_t main(){

    fast
    int n;cin>>n;

    vector<int> peso(n);
    vector<Edge> edges;
    vector<Edge> results;
    int peque=INF;

    loop(i,n){
        cin>>peso[i];
        peque=min(peque,peso[i]);
    }

    loop(i,n){
        loop(j,n){
            int t;cin>>t;
            if(i<=j){
            Edge temporal;
            temporal.u=i;
            temporal.v=j;
            temporal.weight=t;
            edges.PB(temporal);
            }
        }
    }

    sortt(edges);
    ran.resize(n);
    parent.resize(n);
    int cost=0;

    loop(i,n){
        make_set(i);
    }
    

    for(Edge e: edges){

        if(find_set(e.u)!=find_set(e.v)){

            cost+=e.weight;
            results.PB(e);
            union_set(e.u,e.v);

        }
    }

    cout<<cost<<" "<<peque;

return 0;}