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

int n;
vector<int> d;
vector<pair<int,int>> l,r;

int32_t main(){
    fast
    //freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    d.resize(n+1);
    l.resize(n+1);
    r.resize(n+1);
    d[0]=0;

    loopi(i,n){
        cin>>d[i];
        l[i].first=d[i]+l[i-1].first;
        l[i].second=i;
    }
    r[n].first=d[n];
    for(int i=n-1;i>=1;i--){
        r[i].first=d[i]+r[i+1].first;
        r[i].second=i;
    }
    return 0;
}