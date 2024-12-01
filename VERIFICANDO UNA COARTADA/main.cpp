#include<bits/stdc++.h>
using namespace std;

int F,P,C,M;
vector<vector<pair<int,int>>> adj(1000000);
const int INF=1000000;

bool Dijkstra(int s){

vector<int> d;
d.assign(F,INF);
d[s]=0;
set<pair<int,int>> q;
q.insert({0,s});

    while(!q.empty()){

        int v =q.begin()->second;
        q.erase(q.begin());

        for(auto edge: adj[v]){

            int u=edge.first;
            int w=edge.second;

            if(d[v]+w<d[u]){

                q.erase({d[u],u});
                d[u]=d[v]+w;
                q.insert({d[u],u});

            }
        }
    }

return d[0]<=M;

}

int main(){

cin>>F>>P>>C>>M;

while(P--){

    int u,v,w;cin>>u>>v>>w;
    u--;v--;
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));

}

deque<int> ans;
int i=1;
while (C--){
    
    int t;cin>>t;t--;
    if(Dijkstra(t)){ans.push_back(i);}
    i++;

}

cout<<ans.size()<<endl;

while(!ans.empty()){

    int u=ans.front();
    ans.pop_front();
    cout<<u<<endl;

}

return 0;}