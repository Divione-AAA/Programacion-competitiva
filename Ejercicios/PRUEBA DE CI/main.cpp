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

int32_t main(){
    fast
    //freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n;cin>>n;
    int a[n],p=0,im=0;
    //cout<<n<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]%2;
        if(a[i]) p++;
        else im++;
    }

    int t = (p>im ? 0 : 1);

    for(int i=0;i<n;i++){
        if(a[i]==1 && a[i]==t) cout<<i+1<<endl;
        else if(a[i]==0 && a[i]==t) cout<<i+1<<endl;
    }

    return 0;
}