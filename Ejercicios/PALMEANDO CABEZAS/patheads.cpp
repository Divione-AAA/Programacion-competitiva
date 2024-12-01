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

vector<int> vacas,ans,incidencia;
int n;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;vacas.resize(n+1);ans.resize(n+1);incidencia.resize(n+1);

    loop(i,n){
        cin>>vacas[i];
        incidencia[vacas[i]]++;
    }

    for(int i=1;i<n;i++){
        if(incidencia[i]>0){
            for(int j=i;j<n;j+=i){
                ans[j]+=incidencia[i];
            }
        }
    }

    loop(i,n){
        cout<<ans[vacas[i]]-1<<endl;
    }

return 0;}