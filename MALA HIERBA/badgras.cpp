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

int n,m,t,ans=0;
int tabla[1000][1000];

void dfs(int x,int y){

if(x<0 || y<0 || x>n-1 || y>m-1 || tabla[x][y]!=1 ) return;
tabla[x][y]=0;

dfs(x,y+1);
dfs(x+1,y+1);
dfs(x-1,y+1);
dfs(x-1,y-1);
dfs(x+1,y-1);
dfs(x+1,y);
dfs(x,y-1);
dfs(x-1,y);

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

    loop(i,n){
        loop(j,m){
            cin>>t;
            if(t>0) t=1;
            tabla[i][j]=t;
        }
    }

    loop(i,n){
        loop(j,m){
            if(tabla[i][j]==1){
                dfs(i,j);
                ans++;
            }
        }
    }

    cout<<ans;

return 0;}