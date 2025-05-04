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

int n,len;
vector<int> a,b;

void proceso(){

    len = (int) sqrt (n + .0) + 1; // size of the block and the number of blocks
    b.resize(len);

    for (int i=0; i<n; ++i){
        b[i / len] += a[i];
    }
}

//suma

/*int rqm(int l,int r){

    int sum = 0;

    for(int i=l; i<=r; ){
        
        if(i % len == 0 && i + len - 1 <= r) {
            sum += b[i / len];
            i += len;
        }else{
            sum += a[i];
            ++i;
        }
    }
    return sum;
}*/

//minimos y maximos

int rqm(int l,int r){

    int sum = INF;

    for(int i=l; i<=r; ){
        
        if(i % len == 0 && i + len - 1 <= r) {
            sum = min(b[i / len],sum);
            i += len;
        }else{
            sum = min(a[i],sum);
            ++i;
        }
    }
    return sum;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;

    a.resize(n);

    loop(i,n) cin>>a[i];

    proceso();

    cout<<rqm(0,3);

return 0;}