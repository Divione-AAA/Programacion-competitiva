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
#define sortt(a); sort(a.begin(),a.end.())

const int INF=100000;
const double pi=3.1415926535;

int n;
int arreglo[350][350]={0};
int tabla[305][305]={0};

int32_t main(){

    fast

    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>arreglo[i][j];
        }
    }
 
    tabla[1][1]=arreglo[1][1];
    pair<int,int> sup,supizq;

    int su,supi;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            sup=MP(i-1,j);
            supizq=MP(i-1,j-1);

            su=arreglo[i][j]+tabla[sup.first][sup.second];
            supi=arreglo[i][j]+tabla[supizq.first][supizq.second];

            tabla[i][j]=max(su,supi);

        }        
    }

    int ans=0;

    for(int i=0;i<=n;i++){
        ans=max(ans,tabla[n][i]);
    }

    cout<<ans<<endl;

return 0;}
