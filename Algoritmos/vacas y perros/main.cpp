#include <bits/stdc++.h>
using namespace std;

char mapa[250][250];
int vacas=0,perros=0;
int nm,mm;
int vacast=0,perrost=0;

void DFS(int n, int m){

if(n<0 || m<0 || m>mm-1 || n>nm-1 || mapa[n][m]=='#'){return;}

if(mapa[n][m]=='o') {vacast=vacast+1;}
if(mapa[n][m]=='v') {perrost=perrost+1;}
mapa[n][m]='#';

DFS(n+1,m);
DFS(n-1,m);
DFS(n,m+1);
DFS(n,m-1);
}

int main(){

int n,m;cin>>n>>m;
nm=n,mm=m;

for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){
        cin>>mapa[i][y];
        if(mapa[i][y]=='o'){vacas=vacas+1;}
        if(mapa[i][y]=='v'){perros=perros+1;}
    }
}

for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){
        if(mapa[i][y]!='#'){
            DFS(i,y);
            if(vacast>perrost){perros=perros-perrost;}
            if(perrost>=vacast){vacas=vacas-vacast;}
            vacast=0;
            perrost=0;
        }
    }
}
cout<<vacas<<" "<<perros<<endl;
return 0;}
