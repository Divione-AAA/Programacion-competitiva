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
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n,k,p;cin>>n>>k>>p;

    deque<int> mazo;

    for(int i=1;i<=k;i++){
        mazo.PB(i);
    }

    vector<int> ans;

    for(int i=1;i<=k;i++){

        int u=mazo.front();
        mazo.pop_front();

        if(i%n==0) ans.PB(u);

        for(int j=0;j<p;j++){

            int v=mazo.front();
            mazo.pop_front();
            mazo.push_back(v);

        }
    }

    sortt(ans);
    
    over(i,ans) cout<<i<<endl;

return 0;}