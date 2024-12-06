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

int n,m,ans=0;
char mapa[105][105]={'.'};

void dfs(int x,int y){

	if(mapa[x][y]=='.' || x<0 || y<0 || x>n-1 || y>m-1){
		return;
	}

	mapa[x][y]='.';

	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	dfs(x+1,y+1);
	dfs(x+1,y-1);
	dfs(x-1,y+1);
	dfs(x-1,y-1);

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

	cin>>n>>m;
	loop(i,n){
		loop(j,m){
			cin>>mapa[i][j];
		}
	}

	loop(i,n){
		loop(j,m){
			if(mapa[i][j]=='W'){
				ans++;
				dfs(i,j);
			}
		}
	}

	cout<<ans;

return 0;}