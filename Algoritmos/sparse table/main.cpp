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

int st[1000][1000];
int st_min[1000][1000];
int st_max[1000][1000];
int n;

vector<int> a;

void build(){

    for (int i = 0; i < n; i++){
        st[i][0] = a[i];
        st_min[0][i]=a[i];
        st_max[0][i]=a[i];
    }

    for (int j = 1; j <= n; j++){
        for (int i = 0; i + (1 << j) <= n; i++){
            st[i][j] = st[i][j-1] + st[i + (1 << (j - 1))][j - 1];
        }
    }

    for (int j = 1;(1<<j)<=n; j++){
        for (int i = 0; i + (1 << j) <= n; i++){
            st[i][j] = st[i][j-1] + st[i + (1 << (j - 1))][j - 1];
            st_min[j][i] = min(st_min[j-1][i], st_min[j-1][i+( 1<<(j-1) )]);
            st_max[j][i] = max(st_max[j-1][i], st_max[j-1][i+( 1<<(j-1) )]);
        }
    }
}

int rmq(int l,int r){

long long sum = 0;

for (int j = n; j >= 0; j--) {
    if ((1 << j) <= r - l + 1) {
        sum += st[l][j];
        l+= 1 << j;
    }
}
return sum;
}

int menor(int l,int r){
    int k = 31 - __builtin_clz(r-l);
    int menor = min(st_min[k][l], st_min[k][r-(1<<k)]);
    return menor;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    a.resize(n);
    loop(i,n) cin>>a[i];
    build();
    cout<<rmq(1,3)<<endl;
    cout<<rmq(7,9)<<endl;
    cout<<rmq(3,6)<<endl;
    cout<<menor(0,9)<<endl;

return 0;}