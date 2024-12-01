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

struct Vacas{

int nombre;
int primer_conteo;
int segundo_conteo;

bool operator<(Vacas const& other) {
        return primer_conteo < other.primer_conteo;
    }
};

struct Vacas_f{

int nombre;
int segundo_conteo;

bool operator<(Vacas_f const& other) {
        return segundo_conteo < other.segundo_conteo;
    }
};

int n,k;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>k;

    vector<Vacas> candidatas;

    loop(i,n){
        int p,s;cin>>p>>s;
        Vacas t;
        t.nombre=i+1;
        t.primer_conteo=p;
        t.segundo_conteo=s;
        candidatas.PB(t);
    }

    sortt(candidatas);

    int cont=0;
    vector<Vacas_f> segunda_vuelta;

    for(int i=n-1;cont<k;i--){

        Vacas_f t;
        t.nombre=candidatas[i].nombre;
        t.segundo_conteo=candidatas[i].segundo_conteo;
        segunda_vuelta.PB(t);
        cont++;

    }

    sortt(segunda_vuelta);

    //for(Vacas_f i:segunda_vuelta) cout<<i.nombre<<" ";

    cout<<segunda_vuelta[k-1].nombre;

return 0;}