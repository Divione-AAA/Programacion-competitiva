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

int n,m=0, arr[100005]={0},ans=0;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

	int t1,t2;
	cin>>n;

	loop(i,n){
		cin>>t1>>t2;
		arr[t1]++,arr[t2+1]++;
		//cout<<arr[t2];
		m=max(m,t2);
	}

	loop(i,m){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	loop(i,m){
		arr[i]+=arr[i+1];
		cout<<arr[i]<<" ";
		ans=max(ans,arr[i]);
	}

	cout<<endl<<ans;

return 0;}