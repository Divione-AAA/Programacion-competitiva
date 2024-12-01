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

bitset<100005> primos;

void criba(int n){

    primos.set();

    primos[0]=primos[1]=0;

    for(int i=4;i<=n;i+=2){

        primos[i]=0;

    }

    for(int i=3;i*i<=n;i+=2){
        
        if(primos[i]){

            for(int j=i*i;j<=n;j+=2*i){
                
                primos[j]=0;
            
            }
        }
    }
}

bool suma1[100005]={false};
bool suma2[100005]={false};

bool atempt(int i,int j){
    return ((!suma1[j]) && (!suma2[i]));
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n;cin>>n;
    criba(n);

    int ans=0;

    for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j++){
            if((primos[i]) && (primos[j]) && (j+i==n)/* && (atempt(i,j))*/){
                suma1[i]=true;suma2[j]=true;
                //cout<<i<<" "<<j<<endl;
                ans++;
            }
        }
    }

    cout<<ans;

return 0;}