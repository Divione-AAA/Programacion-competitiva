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

int m,n,mayor=0,cantidad=0,temporal=0;
vector<string> mapa(100005);

void dfs(int x,int y){
	
	if(x>m-1||x<0||y>n-1||y<0){
		return;
	}

	if(mapa[x][y]!='1')return;

	mapa[x][y]='0';
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	temporal++;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);
	mapa.clear();
	cin>>m>>n;
	loop(i,m){
		cin>>mapa[i];
		
	}
	
	loop(i,m){
		loop(j,n){
			if(mapa[i][j]!='0'){
				cantidad++;
				dfs(i,j);
				mayor=max(mayor,temporal);
				temporal=0;
			}
		}
	}

	cout<<cantidad<<" "<<mayor<<endl;

return 0;}