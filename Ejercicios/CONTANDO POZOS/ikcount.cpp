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

char e;
bool mapa[1005][1005]={false};
bool verificacion=false;
int n,m,ans=0;

void dfs(int i,int j){

    if(i<0 || j<0 || i>n || j>m || mapa[i][j]==false) return;

    mapa[i][j]=false;

    if(mapa[i+1][j]) dfs(i+1,j);
    if(mapa[i-1][j]) dfs(i-1,j);
    if(mapa[i][j+1]) dfs(i,j+1);
    if(mapa[i][j-1]) dfs(i,j-1);
    if(mapa[i+1][j+1]) dfs(i+1,j+1);
    if(mapa[i+1][j-1]) dfs(i+1,j-1);
    if(mapa[i-1][j-1]) dfs(i-1,j-1);
    if(mapa[i-1][j+1]) dfs(i-1,j+1);

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

    loop(i,n){
        loop(j,m){
            cin>>e;
            if(e=='W'){
                mapa[i][j]=true;
                verificacion=true;
            }else{
                mapa[i][j]=false;
            }
        }
    }

    if(verificacion){

        loop(i,n){
            loop(j,m){
                if(mapa[i][j]){
                    ans++;
                    dfs(i,j);
                }
            }
        }

    }else{
        cout<<0<<endl;
        return 0;
    }

    cout<<ans;


return 0;}