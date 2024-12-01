#include<bits/stdc++.h>
using namespace std;

char tablero[1000][1000]={'.'};
bool tab[1000][1000];
int h,w,n;
int fi,ci;

bool ver(int fila,int columna){

    return fila>0 && columna>0 && fila<=h && columna<=w ;

}

void salida(int fila,int columna, char dir,int pasos){

if(dir == 'n'){

    for(int i=fila;i>=0;i--){

        if(tablero[i][columna]=='#'){

            cout<<pasos;

        }
    }
}
else if(dir == 's'){

    for(int i=fila;i<h;i++){

        if(tablero[i][columna]=='#'){

            cout<<pasos;

        }

    }
}
else if(dir == 'e'){

    for(int i=columna;i>=0;i--){

        if(tablero[fila][i]=='#'){

            cout<<pasos;

        }
    }

}

else if(dir == '0'){

    for(int i=columna;i<w;i++){

        if(tablero[fila][i]=='#'){

            cout<<pasos;

        }
    }
}
//cout<<"-1";
}

struct nodo{

int fila,columna;
int pasos;
char dir;

};

int main(){

cin>>h>>w>>n;

cin>>fi>>ci;

queue<nodo> cola;

nodo padre,hijo;
padre.fila=fi;
padre.columna=ci;

cola.push(padre);

int ff,cf;cin>>ff>>cf;

while(n--){

    int t1,t2;
    cin>>t1>>t2;

    tablero[t1][t2]='#';

}

while(cola.empty()){

    padre=cola.front();
    cola.pop();

    if(ff==padre.fila && cf==padre.columna){

        cout<<"yes";
        salida(padre.fila,padre.columna,padre.dir,padre.pasos);
        return 0;

    }

    tab[padre.fila][padre.columna]=true;

    //norte

    hijo=padre;
    hijo.fila=padre.fila-1;
    hijo.dir='n';
    if(ver(hijo.fila,hijo.columna) && tablero[hijo.fila][hijo.columna]!='*' && !tab[hijo.fila][hijo.columna]){

        hijo.pasos=padre.pasos+1;
        cola.push(hijo);

    }

    //sur

    hijo=padre;
    hijo.fila=padre.fila+1;
    hijo.dir='s';
    if(ver(hijo.fila,hijo.columna) && tablero[hijo.fila][hijo.columna]!='*' && !tab[hijo.fila][hijo.columna]){

        hijo.pasos=padre.pasos+1;
        cola.push(hijo);

    }


    //este

    hijo=padre;
    hijo.columna=padre.columna-1;
    hijo.dir='e';
    if(ver(hijo.fila,hijo.columna) && tablero[hijo.fila][hijo.columna]!='*' && !tab[hijo.fila][hijo.columna]){

        hijo.pasos=padre.pasos+1;
        cola.push(hijo);

    }

    //oeste

    hijo=padre;
    hijo.columna=padre.columna+1;
    hijo.dir='o';
    if(ver(hijo.fila,hijo.columna) && tablero[hijo.fila][hijo.columna]!='*' && !tab[hijo.fila][hijo.columna]){

        hijo.pasos=padre.pasos+1;
        cola.push(hijo);

    }
}

//cout<<"-1"<<endl;

return 0;}
