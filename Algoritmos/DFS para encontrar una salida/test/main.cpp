#include <bits/stdc++.h>
using namespace std;

int tablero[1000][1000];
int ng,mg;

void DFS(int n,int m,int c){

    int color=c;
    if (n<0||m<0||n>ng-1||m>mg-1||tablero[n][m]==1||tablero[n][m]!=0) return;

    tablero[n][m]=1;
    DFS(n+1,m,color);
    DFS(n-1,m,color);
    DFS(n,m+1,color);
    DFS(n,m-1,color);

}

int main(){

int n,m;cin>>n>>m;
mg=m;ng=n;
pair<int,int> inicio,fin;

for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){

        char t;cin>>t;tablero[i][y]=t;

    }
}

for(int i=0;i<n;i++){
        int a=0;
    for(int y=0;y<m;y++){

          if(tablero[i][y] == 'i'){ a=1;inicio.first=i,inicio.second=y;break;}

    }
if(a==1) break;
}

for(int i=0;i<n;i++){
        int a=0;
    for(int y=0;y<m;y++){

          if(tablero[i][y] == 'f'){
          a=1;
          fin.first=i;
          fin.second=y;
          break;
          }
    }
if(a==1) break;
}
for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){

        if(tablero[i][y] == '#') tablero[i][y]=1;
        else tablero[i][y]=0;

    }
}

DFS(inicio.first,inicio.second,1);
cout<<(tablero[fin.first][fin.second]==1 ? "existe una salida" : "no existe una salida")<<endl;
cout<<inicio.first<<" "<<inicio.second<<endl;
cout<<fin.first<<" "<<fin.second<<endl;

for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){

        cout<<tablero[i][y];

    }
    cout<<endl;
}
return 0;}
