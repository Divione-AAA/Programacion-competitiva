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

const int INF=4294967296;
const int _INF=-4294967296;
const double pi=3.1415926535;

int n,m;
vector<int> tabla(1000000,-1);

int32_t main(){
    fast
    //freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;
    //fill(tabla.begin(),tabla.end(),-1);

    queue<pair<int,int>> q;
    q.push({n,0});

    while(!q.empty()){
        auto actual = q.front();
        q.pop();
        //comprobacion
        if(actual.first==m){
            cout<<actual.second;
            return 0;
        }
        //*2
        if(actual.first*2<m*2 && tabla[actual.first*2]==-1){
            tabla[actual.first*2]=1;//marcar como ya visitado
            q.push({actual.first*2,actual.second+1});
        }
        //-1
        if(actual.first-1>0 && tabla[actual.first-1]==-1){
            tabla[actual.first-1]=1;//marcar como ya visitado
            q.push({actual.first-1,actual.second+1});
        }
    }

return 0;}