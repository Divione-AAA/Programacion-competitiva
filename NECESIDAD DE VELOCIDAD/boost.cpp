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

int f,m,n;
double st,it,ma=0,t;

int32_t main(){
	
	fast
	freopen("boost.in", "r", stdin);freopen("boost.out", "w", stdout);

	cin>>f>>m>>n;

	vector<pair<int,int>> partes(n);

	loop(i,n){
	
		cin>>partes[i].first;
		cin>>partes[i].second;
	
	}

	int stm,itm;

	vector<int> ans,dans;

	loop(i,(1<<n)){
		ans.clear();
		st=0,it=0;
		loop(j,n){
			if(i&(1<<j)){
				ans.PB(j+1);
				st+=partes[j].first;
				it+=partes[j].second;
			}
		}
		t=(f+st)/(it+m);
		if(t>ma){
			dans=ans;
			stm=st;itm=it;
			ma=t;
		}
	}

	sortt(dans);

	over(i,dans) cout<<i<<endl;

	//cout<<fixed<<setprecision(4)<<ma;
	//cout<<" "<<stm<<" "<<itm;

return 0;}