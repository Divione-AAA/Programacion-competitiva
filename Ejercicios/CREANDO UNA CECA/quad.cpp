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

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n,ans=0;cin>>n;

    vector<int> p;

    loup(i,1,n){
        loup(j,1,n){
            loup(k,1,n){
                loup(l,1,n){ 
                    p.PB(i);p.PB(j);p.PB(k);p.PB(l);
                    sortt(p);
                    if(p[0]==p[1] && p[2]==p[3] && i+j+k+l==n){
                        ans++;
                        //cout<<i<<j<<k<<l<<endl;
                    }
                    p.clear();
                }
            }
        }
    }

    cout<<ans;

return 0;}