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

int n,m,t;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

	vector<vector<int>> r(1000);

	loup(i,1,n+1){
		cin>>t;
		for(int j=0;j<1000;j++){
			if(j%t==0){
				r[j].PB(i);
			}
		}
	}

	for(int i=0;i<10;i++){

		cout<<i<<": ";

		over(j,r[i]){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	cout<<"ye";

return 0;}