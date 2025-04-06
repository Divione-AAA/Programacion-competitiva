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

int n,t;
multiset<int> v;
int a,b,ans=1;
vector<int> t2;

vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d <= (n/2); d++) {
		if(n%d==0){
			factorization.push_back(d);
		}
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}


int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t<ans){
			continue;
		}
		t2.clear();
		t2=trial_division1(t);
		sortt(t2);
		reverse(t2.begin(),t2.end());

		over(j,t2){
			v.insert(j);
			if(j<ans){
				break;
			}
			//cout<<j<<" "<<t<<endl;
			if(v.count(j)>=2){
				ans=max(ans,j);
			}
		}
	}
	cout<<ans;
	
return 0;}