#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int INF=1000000;

int n,m,k;
vector<int> mercados;
vector<vector<pair<int,int>>> adj;

int Dijkstra(int s,int p){

    vector<int> d;
    d.assign(n,INF);
    set<pair<int,int>> q;
    d[s]=0;
    q.insert({0,s});

        while(!q.empty()){

            int v=q.begin()->second;
            q.erase(q.begin());

            for(auto edge : adj[v]){

                int u=edge.first;
                int w=edge.second;

                if(d[v] + w < d[u]){

                    q.insert({d[u],u});
                    d[u]=d[v]+w;
                    q.erase({d[u],u});

                }

            }

        }

return d[p];

}

int32_t main(){

    cin>>n>>m>>k;
    mercados.resize(k);
    adj.resize(n);

    while(k--){

        int t;cin>>t;t--;
        mercados.push_back(t);

    }

    while(m--){

        int u,v,w;cin>>u>>v>>w;u--;v--;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    }

    int ans=INF;
    int t=0;
    int sum=0;
    sort(mercados.begin(),mercados.end());

    for (int i=0;i<n;i++){
       
        //cout<<i+1<<": ";
        t=Dijkstra(i,mercados[0]);
        sum+=t;
        //cout<<t<<" ";

        for(int y=1;y<mercados.size();y++){
            if(i==mercados[y]){sum=INF;break;}
            t=Dijkstra(mercados[y-1],mercados[y]);  
            sum+=t;          
            //cout<<t<<" ";
        }
        //cout<<" sum:"<<sum;
        t=0;
        ans=min(sum,ans);
        //cout<<endl;
        sum=0;
    }
    
    cout<<ans*2<<endl;

return 0;}