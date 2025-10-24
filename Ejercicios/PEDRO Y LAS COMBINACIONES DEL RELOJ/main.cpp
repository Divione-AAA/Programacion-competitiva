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

vector<int> r;
int n,cp,cn,t;

int32_t main(){
    fast
    //freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);
    cin>>n;
    r.resize(n);
    loop(i,n) cin>>r[i];


    loop(m,1<<n){
        cp=cn=0;
        t=0;
        //if(__builtin_popcount(m)==n){
            loop(i,n){
                if(m&(1<<i)){
                    cp+=r[i];
                    t++;
                }else{
                    cn+=r[i];
                    t++;
                }
            }
            //cout<<cp<<" "<<cn<<endl;
            //mi error era verlo como una suma cuando en realidad es si alguna suma o resta era modulo de 360
            if((cp-cn)%360==0){
                //cout<<cp<<" "<<cn<<endl;
                cout<<"YES";
                return 0;
            }
        //}
    }

    cout<<"NO";
return 0;}