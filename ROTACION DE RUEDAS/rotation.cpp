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

int32_t main(){
	
	fast
	freopen("rotation.in", "r", stdin);freopen("rotation.out", "w", stdout);

    int n;cin>>n;
    int u,v,w,ans=0;

    int d[n-1];

    loop(i,n-1){
        cin>>u>>v>>w;u--;v--;
        d[u]=w;
    }

    loop(i,n-1){
        if(d[i]==1 && ans==0){
            ans=1;
        }else if(d[i]==1 && ans==1){
            ans=0;
        }
    }

    cout<<ans;

return 0;}