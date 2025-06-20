#include <bits/stdc++.h>
using namespace std;

int name=0,dist=0,cant=0;

struct nodo{

    int nombre;
    int pos;

};

int main(){

int n,c;cin>>n>>c;
queue<nodo> cola;
vector<vector<int>> adj(c+1);
vector<bool> visitado(n+1);

for(int i=0;i<c;i++){

    int u,v;cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);

}

nodo padre,hijo;
padre.nombre=1;
padre.pos=0;

cola.push(padre);

while(!cola.empty()){

    padre=cola.front();
    cola.pop();
    //cout<<padre.nombre<<" "<<padre.pos<<endl;

    if(padre.pos>dist){

        name=padre.nombre;
        dist=padre.pos;
        cant=1;

    }

    if(padre.pos==dist){

        cant=cant+1;

    }

    if(name>padre.nombre && dist==padre.pos){

        name=padre.nombre;

    }

    if(!visitado[padre.nombre]==true){
        visitado[padre.nombre]=true;
    }

    for(int n: adj[padre.nombre]){
        if(!visitado[n]){
            visitado[n]=true;
            hijo.nombre=n;
            hijo.pos=padre.pos+1;
            cola.push(hijo);
        }
    }
}

//if(dist>1){dist=dist-1;}

cout<<name<<" "<<dist<<" "<<cant-1<<" "<<endl;

return 0;}
