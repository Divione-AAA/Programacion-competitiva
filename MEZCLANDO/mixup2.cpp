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

vector<int> cifras,temporal;
int n,k,a,b,ans=0;

void test(){

    if(temporal==cifras) return;

    /*ans++;

    loup(i,1,n){
        a=temporal[i];b=temporal[i-1];
        if(a<b) swap(a,b);
        if(a-b>k) return;
    }*/

    loop(i,n) cout<<temporal[i]<<" ";
    cout<<endl;

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>k;
    cifras.resize(n);

    loop(i,n){
        cin>>cifras[i];
    }

    loop(i,(1<<n)){
        temporal.clear();
        loop(j,n){
            if(i&(1<<j)){
                //temporal.PB(cifras[j]);
                cout<<cifras[j]<<" ";
            }
        }
        cout<<endl;
        //if(temporal.size()==n){test();}
    }

    cout<<ans;

return 0;}