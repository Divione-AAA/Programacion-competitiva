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

vector<bool> primos(INF,true);
int ans=0;

void answer(int n){

string p;
stringstream flujo;
flujo<<n;
p=flujo.str();
reverse(p.begin(),p.end());
int z=atoi(p.c_str());
//cout<<z<<endl;
if(primos[z]) ans++;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int a,b;cin>>a>>b;

    if(a>b) swap(a,b);

    //cout<<a<<" "<<b;

    for(int i=2;i<=INF;i++){
        if(primos[i] && (long long) i*i <=INF){
            for(int j=i*i;j<=INF;j+=i){
                primos[j]=false;
            }
        }
    }

    vector<int> numeros;

    for(int i=a;i<=b;i++){
        if(primos[i]) numeros.PB(i);
    }

    over(i,numeros) answer(i);

    cout<<ans;

return 0;}