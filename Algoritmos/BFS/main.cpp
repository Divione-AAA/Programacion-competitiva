#include <bits/stdc++.h>
using namespace std;

//deque<int> BFS;
vector<bool> visitados(1000);

void bfs(int i ,vector<vector<int>> &adj){

    queue<int> BFS;

    BFS.push(i);
    while(!BFS.empty()){

        int p=BFS.front();
        BFS.pop();

        if(!visitados[p]){
            visitados[p]=true;
            //cout<<p<<" "<<endl;
        }

        for(int n : adj[p]){
            if(!visitados[n]){
                BFS.push(n);
            }
        }
    }
}

int main(){

    int n,a;cin>>n>>a;

    vector<vector<int>> adjacent(1000);

    for(int i=0;i<a;i++){

    int u,v;cin>>u>>v;

    adjacent[u].push_back(v);
    adjacent[v].push_back(u);

    }

    int i,f;cin>>i>>f;

    bfs(i,adjacent);

    cout<<(visitados[f]==0 ? "NO" : "YES");

return 0;}
