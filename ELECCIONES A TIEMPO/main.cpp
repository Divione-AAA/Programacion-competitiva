#include<bits/stdc++.h>
#include<numeric>
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

vector<int> t;
int ans=0;
int n,c,m,p,s;

void wer(){
s=0;
over(i,t){
s+=i;
}

//cout<<s<<endl;

loup(i,2,s){
    if(s%i==0 && m%i==0) ans++;return;
}

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    while(cin>>n>>c>>m){

    int tabla[n];

    loop(i,n) cin>>tabla[i];
    

    loop(i,(1<<n)){
        t.clear();
        loop(j,n){
            if(i&(1<<j)){
                t.PB(tabla[j]);
                //cout<<tabla[j]<<" ";
            }
        }//cout<<endl;
        if(t.size()==c){wer();}
    }

    cout<<ans<<endl;
    }
return 0;}