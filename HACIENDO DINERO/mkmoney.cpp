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

vector<int> costes,retornos;
int ans=-1;
int n,m;

set<pair<int,int>> tabla;


void solve(int resto, int valor){
    
    if(tabla.count({resto,valor})){
        return;
    }
    tabla.insert({resto,valor});
    ans=max(ans,valor+resto);
    //cout<<resto<<" "<<valor<<endl;  

    loop(i,n){ 
        if((resto-costes[i])>=0 && (tabla.count({resto-costes[i],valor+(abs(costes[i]-retornos[i]))}))==0){
            solve(resto-costes[i],valor+(abs(costes[i]-retornos[i])));
        }
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;
    costes.resize(n),retornos.resize(n);

    loop(i,n){
        cin>>costes[i]>>retornos[i];
    }

    /*loop(i,n){
        cout<<costes[i]<<" "<<retornos[i]<<endl;
    }*/

    solve(m,0);

    cout<<ans;

return 0;}