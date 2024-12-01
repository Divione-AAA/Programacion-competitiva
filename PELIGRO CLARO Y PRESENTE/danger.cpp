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

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

    vector<int> orden(m);

    loop(i,m){
        cin>>orden[i];
        orden[i]--;
    }

    int matriz[n][n];

    loop(i,n){
        loop(j,n){
            cin>>matriz[i][j];
        }
    }

    loop(i,n){
        loop(j,n){
            loop(k,n){
                matriz[i][j]=min(matriz[i][j],matriz[i][k]+matriz[k][j]);
            }
        }
    }

    int ans=0;

    loup(i,1,m){
        ans=ans+matriz[orden[i-1]][orden[i]];
    }

    cout<<ans;

return 0;}