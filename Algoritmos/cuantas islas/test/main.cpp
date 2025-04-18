#include <bits/stdc++.h>
using namespace std;

int mapa[1000][1000];
int nm,mm;
int n,m;

void llenar(){

cin>>n>>m;
nm=n,mm=m;

for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){
            cin>>mapa[i][y];
        }
    }
}

void limpiar(int n,int m,int c){

if(n<0||m<0||n>nm-1||m>mm-1||mapa[n][m]==0) return;
int color=c;
mapa[n][m]=0;

limpiar(n+1,m,color);
limpiar(n-1,m,color);
limpiar(n,m+1,color);
limpiar(n,m-1,color);
limpiar(n+1,m-1,color);
limpiar(n-1,m+1,color);
limpiar(n+1,m+1,color);
limpiar(n-1,m-1,color);

}

int determinar(){

    int contador=0;

    for(int i=0;i<n;i++){
        for(int y=0;y<m;y++){

            if(mapa[i][y]==1){
                contador++;
                limpiar(i,y,0);
            }
        }
    }
    return contador;
}

int main(){

llenar();
cout<<determinar();

return 0;}
