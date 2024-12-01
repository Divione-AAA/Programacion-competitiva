#include <bits/stdc++.h>
using namespace std;

int tablero[1000][1000];
bool tablero_c[1000][1000]={false};
int ng,mg;

void DFS(int a,int b,int color){
int n=a,m=b;
int c=color;
if (n<0||m<0||n>ng||m>mg||tablero[n][m]==1|||tablero[n][m]=!0) return;

tablero[n][m]=c;

if(tablero[n+1][m]==0) DFS(n+1,m,c);
if(tablero[n-1][m]==0) DFS(n-1,m,c);
if(tablero[n][m+1]==0) DFS(n,m+1,c);
if(tablero[n][m-1]==0) DFS(n,m-1,c);

}

int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,m;
cin>>n>>m;
ng=n;
mg=m;
for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){
        cin>>tablero[i][y];
    }
}

cout<<endl;
int c=1;
for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){
        if(tablero[i][y]==0){
            c++;
            DFS(i,y,c);

        }
    }
}

for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){
        cout<<tablero[i][y]<<" ";
        }
        cout<<endl;
    }


return 0;}
