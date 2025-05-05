#include <bits/stdc++.h>
using namespace std;

struct nodo{

    int prof=1;
    int nombre;

};

int main(){

    int n,c;cin>>n>>c;

    vector<vector<int>> adj(n+1);
    bool visitado[c+1]={false};
    vector<int> puntos(n);

    for(int i=0;i<c;i++){

        int n,u,v;cin>>n>>u>>v;
        adj[n].push_back(v);
        adj[n].push_back(u);
    }

    queue<nodo> cola;

    nodo padre,hijo;
    padre.nombre=1;
    cola.push(padre);

    while(!cola.empty()){

        padre=cola.front();
        cola.pop();
        puntos[padre.nombre-1]=padre.prof;

        if(!visitado[padre.nombre]){
            visitado[padre.nombre]=true;
        }

        for(int i: adj[padre.nombre]){

        if(!visitado[i]){

            hijo.nombre=i;
            hijo.prof=padre.prof+1;
            cola.push(hijo);
        }
    }
}

for(int i:puntos){
    cout<<i<<endl;
}

return 0;}
