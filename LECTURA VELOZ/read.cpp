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

int p,c,s,t,r;

int answer(int s,int t,int r){

	int a=0;
	int x=0;
	while(true){
		for(int i=0;i<t;i++){
			a+=s;
			x++;
			if(a>=p) break;
		}

		if(a>=p) break;
		x+=r;
	}
return x;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

	cin>>p>>c;

	while(c--){
		cin>>s>>t>>r;
		cout<<answer(s,t,r)<<endl;
	}

return 0;}