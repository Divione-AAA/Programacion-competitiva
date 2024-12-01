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

int n,ans=0;
vector<int> a,b;



int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    a.resize(n+1);
    b.resize(n+1);
    b[0]=0;
    a[0]=INT_MIN;

    loup(i,1,n+1){
        cin>>a[i];
    }

    loup(i,1,n+1){
        vector<bool> k(n+1,false);
        int sum=0;
        loup(j,i,n+1){
            if(!k[a[j]]){
                k[a[j]]=true;
                sum++;
            }else{
                k[a[j]]=true;
            }
            ans+=sum;
        }
    }

    cout<<ans;

return 0;}