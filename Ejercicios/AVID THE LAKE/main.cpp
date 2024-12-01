#include <bits/stdc++.h>
using namespace std;

int n,m,c;
int mx=0;
int t=0;
char mapa[100][100]={'.'};
bool tablero[100][100]={false};

void dfs(int x,int y){

if(mapa[x][y]!='#' || x<0 || y<0 || x>n-1 || y>m-1 || tablero[x][y]==true){return;}

tablero[x][y]=true;
t=t+1;

dfs(x+1,y);
dfs(x-1,y);
dfs(x,y+1);
dfs(x,y-1);

}

int main(){

    cin>>n>>m>>c;

    while(c--){

        int a,b;cin>>a>>b;
        mapa[a-1][b-1]='#';

    }

    for(int i=0;i<n;i++){
        for(int y=0;y<m;y++){

            //cout<<mapa[i][y];
            if(mapa[i][y]=='#' && tablero[i][y]==false){

               t=0;
               dfs(i,y);
               mx=max(mx,t);

            }
        }
    }

    cout<<mx;

return 0;}
