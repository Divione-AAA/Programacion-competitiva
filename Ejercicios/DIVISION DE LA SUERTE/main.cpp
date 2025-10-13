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

set<int> s;

void calcular(string n){
    if(n.size()<=3){
        if(n!="")s.insert(atoi(n.c_str()));
        calcular(n+"4");
        calcular(n+"7");
    }
}

int32_t main(){
    fast
    //freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    calcular("");
    //over(i,s) cout<<i<<endl;
    int n;cin>>n;

    over(i,s){
        if(n%i==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    
    cout<<"NO"<<endl;

    return 0;
}