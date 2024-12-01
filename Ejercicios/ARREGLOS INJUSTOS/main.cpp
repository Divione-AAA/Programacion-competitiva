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

int n,k,ans=INT_MAX;
vector<int> a;

void answer(int s,vector<int> a,vector<int> d){

    if(s==k){
        sortt(d);
        ans=min(ans,d[k-1]-d[0]);
        return;
    }

    loop(i,a.size()){
    
    vector<int> x=a;
    vector<int> y=d;
    y.PB(x[i]);
    x.erase(x.begin()+i);
    answer(s+1,x,y);
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n
       >>k;

    a.resize(n);

    for(auto &i: a){
        cin>>i;
    }

    vector<int>d;
    d.clear();
    answer(0,a,d);
    cout<<ans;
    

return 0;}