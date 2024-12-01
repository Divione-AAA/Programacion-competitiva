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

vector<bool> verificacion;
int n,m;

bool inconveniencia(vector<vector<int>> adj,int origen, int destino){

verificacion.assign(n,false);
queue<int> q;
q.push(origen);
verificacion[origen]=true;
while(!q.empty()){
    int v=q.front();
    q.pop();

    over(i,adj[v]){
        if(!verificacion[i]){
            q.push(i);
            verificacion[i]=true;
        }
    }
}
return verificacion[destino];}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

    deque<pair<int,int>> orden;
    vector<vector<int>> adj(n);

    int a,b;

    loop(i,m){
        cin>>a>>b;a--;b--;
        adj[a].PB(b);
        adj[b].PB(a);
        orden.PB(MP(a,b));
    }

    /*int i,f;
    i=orden.front().first;
    f=orden.front().second;

    cout<<i<<" "<<f<<endl;

    adj[i][f-1]=-2;

    loop(i,n){
        cout<<i<<" ";
            over(j,adj[i]){
                cout<<++j<<" ";
            }
        cout<<endl;
    }*/

    int origen,adjacencia,ans=0;

    while(!orden.empty()){

        origen=orden.front().first;
        adjacencia=orden.front().second;
        orden.pop_front();

        adj[origen][adjacencia-1]=NULL;

        loop(i,n){
            loup(j,i+1,n){
                if(!inconveniencia(adj,i,j)){ans++;}
            }
        }

        cout<<ans<<endl;
        ans=0;

    }

return 0;}