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

int t;
int ans=0;

int32_t main(){
	
	fast
	freopen("diningb.in", "r", stdin);freopen("diningb.out", "w", stdout);

    int n;cin>>n;
    bool le=false;bool r=false;
    vector<int> linea;

    loop(i,n){
        cin>>t;linea.PB(t);
        if(t==2){
            le=true;
        }else{
            r=true;
        }
    }

    if(le==false || r==false){cout<<0;return 0;}

    int l=0;

    if(linea[n-1]==1 && linea[n-2]==2){
        ans++;
        linea[n-1]=2;
        for(int i=n-1;i>=0;i--){
            
            if(linea[i]==2){
                l++;
            }else if(linea[i]==1){
                break;
            }
        }
    }

    loop(i,n-l){
        if(linea[i]==2){
            ans++;
        }
    }

    cout<<ans;

return 0;}