/*NO*/
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

int n,m,sumatoria=0,ans=0,contador=0;
vector<int> sitios;

int abso(int a){
    return a<0 ? a*-1 : a;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;

    loop(i,m){
        int t;cin>>t;sitios.PB(t);
    }

    sortt(sitios);

    loop(i,m){

        if(sitios[i]>0){
            sumatoria+=sitios[i]-contador;
        }else{
            sumatoria+=sitios[i]-contador;
        }

        if(sumatoria>n) break;
        ans++;contador=sitios[i];

    }

    cout<<ans<<" "<<sumatoria;

return 0;}