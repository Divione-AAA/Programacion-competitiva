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

struct nodo{

int fila,columna,direccion=0,cambio=0,pasos=1;

};

int n,m;
char tablero[100][100];
bool verificacion[100][100];
pair<int,int> inicio,fin;

bool ret(int x,int y){
return (x>0 && y>0 && x<=n && y<=m);
}

void BFS(int i,int y){

    queue<nodo> q;
    nodo padre;
    nodo hijo;
    hijo.columna=y;
    hijo.fila=i;
    q.push(hijo);

    while(!q.empty()){

        padre=q.front();
        q.pop();

        if(padre.fila == fin.first  && padre.columna == fin.second ){

            cout<<padre.cambio-2<<endl;return;

        }

        verificacion[padre.fila][padre.columna]=true;

        //norte

        hijo=padre;
        hijo.fila=padre.fila-1;
        hijo.direccion=padre.direccion;

        if(ret(hijo.fila,hijo.columna) && tablero[hijo.fila][hijo.columna]!='*' && !verificacion[hijo.fila][hijo.columna]){

            hijo.direccion=1;

            if(padre.direccion!=hijo.direccion){
                hijo.cambio=padre.cambio+1;
            }

            verificacion[hijo.fila][hijo.columna]=true;
            q.push(hijo);

        }

        //sur

        hijo=padre;
        hijo.fila=padre.fila+1;
        hijo.direccion=padre.direccion;

        if(ret(hijo.fila,hijo.columna) && tablero[hijo.fila][hijo.columna]!='*' && !verificacion[hijo.fila][hijo.columna]){

            hijo.direccion=2;

            if(padre.direccion!=hijo.direccion){
                hijo.cambio=padre.cambio+1;
            }

            verificacion[hijo.fila][hijo.columna]=true;
            q.push(hijo);
        }

        //este

        hijo=padre;
        hijo.columna=padre.columna-1;
        hijo.direccion=padre.direccion;

        if(ret(hijo.fila,hijo.columna) && tablero[hijo.fila][hijo.columna]!='*' && !verificacion[hijo.fila][hijo.columna]){
            
            hijo.direccion=3;
            
            if(padre.direccion!=hijo.direccion){
                hijo.cambio=padre.cambio+1;
            }

            verificacion[hijo.fila][hijo.columna]=true;
            q.push(hijo);
        }

        //oeste

        hijo=padre;
        hijo.columna=padre.columna+1;
        hijo.direccion=padre.direccion;

        if(ret(hijo.fila,hijo.columna) && tablero[hijo.fila][hijo.columna]!='*' && !verificacion[hijo.fila][hijo.columna]){
            
            hijo.direccion=4;
            
            if(padre.direccion!=hijo.direccion){
                hijo.cambio=padre.cambio+1;
            }

            verificacion[hijo.fila][hijo.columna]=true;
            q.push(hijo);
        }
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

    int c=1;

    loop(i,n){
        loop(j,m){
            cin>>tablero[i][j];
            if(tablero[i][j]=='C' && c==1){
                inicio.first=i;inicio.second=j;
                c++;
            }else if(tablero[i][j]=='C' && c==2){
                fin.first=i;fin.second=j;
            }
        }
    }

    BFS(inicio.first,inicio.second);

return 0;}