#include <bits/stdc++.h>
using namespace std;

vector<int> sol(1000);
int x=0;

void clear(int i, int j, vector<vector<int>>& grid,int var) {

        if (i<0 || j<0 || i>=grid.size() || j>=grid[0].size()|| grid[i][j] != 0 ) return;

        grid[i][j]=0;
        sol[var]++;

        clear(i+1,j,grid,var);
        clear(i-1,j,grid,var);
        clear(i,j-1,grid,var);
        clear(i,j+1,grid,var);
    }

int maxAreaOfIsland(vector<vector<int>>& grid) {

        for(int i=0;i<grid.size();i++){
            for(int y=0;y<grid[0].size();y++){

                    if(grid[i][y]==1){

                        clear(i,y,grid,x);
                        x++;
                }
            }
        }

        sort(sol.begin(),sol.end());
        return sol[0];
}

int main(){

vector<vector<int>> grid(1000);
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int y=0;y<m;y++){

     cin>>grid[][y];


    }
}

cout<<maxAreaOfIsland(grid);



return 0;}
