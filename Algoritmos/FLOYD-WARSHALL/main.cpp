#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int MAX = 1000;   //cantidad máxima de nodos
const int INF = 1000000;

int n;
int grafo[MAX][MAX];
int distancia[MAX][MAX];
int predecesor[MAX][MAX];

void floyd(){
     for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
     if(distancia[i][k]+distancia[k][j] < distancia[i][j]){
         distancia[i][j] = distancia[i][k] + distancia[k][j];
         predecesor[i][j] = k;
     }
            }
        }
    }
}

void built_path(int i, int j, vector<int>& camino){
    int k = predecesor[i][j];
    if(k==-1) return;

    built_path(i, k, camino);
    camino.push_back(k);
    built_path(k, j, camino);
}

vector<int> built_path(int i, int j){
    vector<int> p;
    if(predecesor[i][j]==INF)  return p;
    else{
        p.push_back(i);
        built_path(i, j, p);
        p.push_back(j);
    }
    return p;
}

int main(){

    int m, u, v, p;
    cin >> n >> m;

    // Inicializamos nuestras matrices
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            grafo[i][j] = INF;
            distancia[i][j] = INF;
            predecesor[i][j] = INF;
        }
    }
    for(int i=0; i<n; i++){
        grafo[i][i] = 0;
        distancia[i][i] = 0;
	  predecesor[i][i] = -1;
    }

    // Leemos cada una de las aristas
    for(int i=0; i<m; i++){
        cin >> u >> v >> p;
        grafo[u][v] = p;
        distancia[u][v] = p;
	  predecesor[u][v] = -1;
    }

    floyd();

    vector<int> path = built_path(3, 4);
    int l = path.size();
    for(int i=0; i<l; i++){
        cout << path[i] << " ";
    }
    cout << "\n";

    return 0;
}
