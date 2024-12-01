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

int n,m;
vector<int> prim;

int32_t main(){
	
	fast
	freopen("costume.in", "r", stdin);freopen("costume.out", "w", stdout);

    cin>>n>>m;

    prim.resize(n);
    
    loop(i,n){
        cin>>prim[i];
    }

    sortt(prim);

    int ans=0;

    loop(i,n){
        loup(j,i,n-1){
            if(prim[i]+prim[j+1]<=m){ans++;}
            else {break;}
        }
    }

    cout<<ans;

return 0;}