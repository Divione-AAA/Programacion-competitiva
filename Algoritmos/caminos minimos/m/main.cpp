#include<bits/stdc++.h>
using namespace std;

int n=0,m=0;
int filainicial,columnainicial;
int filafinal,columnafinal;
char mapa[105][105];
bool visitado[105][105]={false};

struct nodo{

int fila,columna;
int pasos=0;

};

void leer(){

cin>>n>>m;
//cin>>filafinal>>columnafinal;
    for(int i=1;i<=n;i++){
        for(int y=1;y<=m;y++){
            cin>>mapa[i][y];
        }
    }
}

bool verificacion(int fila,int columna){

    return fila>0 && columna>0 && fila<=n && columna<=m ;

}

void deti(){

    for(int i=1;i<=n;i++){
        for(int y=1;y<=m;y++){
            if(mapa[i][y]=='B'){
                filainicial=i,columnainicial=y;
            }
        }
    }
}
void detf(){

    for(int i=1;i<=n;i++){
        for(int y=1;y<=m;y++){
            if(mapa[i][y]=='C'){
                filafinal=i,columnafinal=y;
            }
        }
    }
}

int main(){

    leer();
    detf();
    deti();

    queue<nodo> cola;

    nodo padre,hijo;

    padre.fila=filainicial;
    padre.columna=columnainicial;

    cola.push(padre);

    //busqueda en amplitud

    while(!cola.empty()){

        padre=cola.front();
        cola.pop();

        if(padre.fila == filafinal  && padre.columna == columnafinal ){

            cout<<padre.pasos<<endl;return 0;

        }

        visitado[padre.fila][padre.columna]=true;

        //norte

        hijo=padre;
        hijo.fila=padre.fila-1;
        if(verificacion(hijo.fila,hijo.columna) && mapa[hijo.fila][hijo.columna]!='*' && !visitado[hijo.fila][hijo.columna]){

            hijo.pasos=hijo.pasos+1;
            cola.push(hijo);
        }

        //sur

        hijo=padre;
        hijo.fila=padre.fila+1;
        if(verificacion(hijo.fila,hijo.columna) && mapa[hijo.fila][hijo.columna]!='*' && !visitado[hijo.fila][hijo.columna]){

            hijo.pasos=hijo.pasos+1;
            cola.push(hijo);
        }

        //este

        hijo=padre;
        hijo.columna=padre.columna-1;
        if(verificacion(hijo.fila,hijo.columna) && mapa[hijo.fila][hijo.columna]!='*' && !visitado[hijo.fila][hijo.columna]){

            hijo.pasos=hijo.pasos+1;
            cola.push(hijo);
        }

        //oeste

        hijo=padre;
        hijo.columna=padre.columna+1;
        if(verificacion(hijo.fila,hijo.columna) && mapa[hijo.fila][hijo.columna]!='*' && !visitado[hijo.fila][hijo.columna]){

            hijo.pasos=hijo.pasos+1;
            cola.push(hijo);
        }
    }

cout<<"-1"<<endl;

return 0;}
