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

struct peticion{

int a,b,n;

    bool operator<(const peticion& other){
        return (abs((a-b)+1))<(abs((other.a-other.b)+1));
    }
};

int n,m,a,b,ans=0;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;
    vector<int> lista(n+1);
    vector<peticion> ordenes(m);

    loup(i,1,n+1){
        cin>>lista[i];
    }

    loop(i,m){
        cin>>ordenes[i].a>>ordenes[i].b;
        ordenes[i].n=i+1;
    }

    sortt(ordenes);

    /*over(i,ordenes){
        cout<<i.n<<" "<<i.a<<" "<<i.b<<endl;
    }*/

    loop(i,m){
        loup(j,ordenes[i].a,ordenes[i].b+1){
            if(lista[j]==0) break;
            lista[j]--;
            if(j==ordenes[i].b) ans++;
        }
    }

    //over(i,lista) cout<<i<<" ";

    cout<<ans;

return 0;}