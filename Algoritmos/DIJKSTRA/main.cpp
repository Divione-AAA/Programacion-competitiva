#include<bits/stdc++.h>
using namespace std;

void Dijkstra(int v,list<pair<int,int>>adj[],int src){

priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
pq.push(make_pair(0,src));
vector<int> pesos(v,INT_MAX);
pesos[src]=0;

while(!pq.empty()){

    int v=pq.top().second;
    pq.pop();

    for(auto i: adj[v]){

        int u=i.first;
        int peso=i.second;

        if(pesos[u] > pesos[v]+peso){

            pesos[u] = pesos[v]+peso;
            pq.push(make_pair(pesos[u],u));

            }
        }
    }

    for(int i=0;i<v;i++){

        cout<<"nodo "<<i<<" "<<pesos[i]<<endl;

    }
}

int main(){

    int v;cin>>v;
    int a,b,w;
    list<pair<int,int>>adj[v];
    int e;cin>>e;

    while(e--){

        cin>>a>>b>>w;
        a--;b--;
        adj[a].push_back(make_pair(b,w));
        adj[b].push_back(make_pair(a,w));

    }

    int src;cin>>src;
    src--;
    Dijkstra(v,adj,src);

return 0;}
