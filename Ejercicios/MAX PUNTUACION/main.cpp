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

struct problema{

    int puntuacion,perdida,resolucion;

    bool operator<(const problema& other){
    
    return resolucion<other.resolucion;
    
    }
};

int n,a=0,ans=0,t;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;

    vector<problema> objetivos(n);

    loop(i,n){
        cin>>objetivos[i].puntuacion>>objetivos[i].perdida>>objetivos[i].resolucion;
    }

    sortt(objetivos);

    loop(i,n){
        a+=objetivos[i].resolucion;
        ans+=(objetivos[i].puntuacion-objetivos[i].perdida*(a));
    }

    cout<<ans;

return 0;}