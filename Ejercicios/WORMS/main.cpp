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

int n,t,v;
vector<int> w;

int solve(int x){
    return upper_bound(w.begin(), w.end(), x) - w.begin()+1;
}


int32_t main(){
    fast
    //freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    w.resize(n);
    loop(i,n){
        cin>>t;
        if(i==0) w[i]=t;
        else w[i]=w[i-1]+t;
    }

    cin>>t;
    while(t--){
        cin>>v;
        cout<<solve(--v)<<endl;
    }

return 0;}