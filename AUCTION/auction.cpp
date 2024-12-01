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
	//freopen("auction.in", "r", stdin);freopen("auction.out", "w", stdout);

    cin>>n>>m;

    vector<int> precios(m);

    loop(i,m){
        cin>>precios[i];
    }

    sortt(precios);

    cout<<endl;

    int mejor_precio=0,precio_base=0,temporal,multiplicador;

    loop(i,m){

        multiplicador=(m-i);

        if(m-i>n) multiplicador=n;

        temporal=precios[i]*multiplicador;

        if(temporal>mejor_precio){
            mejor_precio=temporal;
            precio_base=precios[i];
        }
    }

    cout<<precio_base<<" "<<mejor_precio; 

return 0;}