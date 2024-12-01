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

bool alcance[100][100]={false};

void Warshal(int const n){

    loop(k,n){
        loop(i,n){
            loop(j,n){
                if(!alcance[i][j]){
                    alcance[i][j]=alcance[j][k] && alcance[k][j];
                }
            }
        }
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n,m;cin>>n>>m;

    loop(i,m){
        int a,b;cin>>a>>b;a--;b--;
        alcance[a][b]=true;
    }

    loop(i,n){
        alcance[i][i]=true;
    }

    int ans=0;

    loop(i,n){
        bool test=true;
            loop(j,n){
                if(!alcance[i][j] && alcance[j][i]){
                    test=false;break;
                }
            }
        if(test) ans++;
    }

    cout<<ans;

return 0;}