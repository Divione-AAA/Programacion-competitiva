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

const int INF=4294967296;
const int _INF=-4294967296;
const double pi=3.1415926535;

int n,ans;
vector<int> v;

int bmax(int i,int j){

    int m=0;

    loup(k,i,j+1){
        m=max(m,v[k]);
    }

return m;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    v.resize(n);

    loop(i,n){
        cin>>v[i];
    }

    loop(i,n){
        loup(j,i+1,n){
            //cout<<i<<" "<<j<<" "<<bmax(i,j)<<endl;
            if(v[i]*v[j]<=bmax(i,j)){
                ans++;
            }
        }
    }

    cout<<ans;

return 0;}