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

struct leche{

int inicio,final,eficiencia;

	bool operator<(const leche& other){
		return final<other.final;
	}
};

int n,m,r,ans=-1;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

	cin>>n>>m>>r;
	
	vector<leche> intervalos(m);

	loop(i,m){
		cin>>intervalos[i].inicio>>intervalos[i].final>>intervalos[i].eficiencia;
	}

	sortt(intervalos);

	int B[m];

	loop(j,m){
		B[j]=intervalos[j].eficiencia;
		loop(i,j){
			if(intervalos[i].final+r<=intervalos[j].inicio && B[i] + intervalos[j].eficiencia>B[j]){
				B[j]=B[i]+intervalos[j].eficiencia;
			}
		}
		ans=max(ans,B[j]);
	}

	cout<<ans;

return 0;}