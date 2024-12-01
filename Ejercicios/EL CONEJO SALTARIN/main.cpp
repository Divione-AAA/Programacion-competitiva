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

int n,q;
double k;
int mt[4*1000000],st[4*1000000];
int b[1000000];
int a[1000000];
//arbol para maximos 

void build(int a[],int v,int tl,int tr){

    if (tl == tr) {
        mt[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        mt[v] = max(mt[v*2],mt[v*2+1]);
    }
}

int rmq(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return mt[v];
    }
    int tm = (tl + tr) / 2;
    return max(rmq(v*2, tl, tm, l, min(r, tm)),rmq(v*2+1, tm+1, tr, max(l, tm+1), r));
}

//arbol para la suma

void builds(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        st[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        builds(a, v*2, tl, tm);
        builds(a, v*2+1, tm+1, tr);
        st[v] = st[v*2] + st[v*2+1];
    }
}


int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return st[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))+sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>k;
    
    loop(i,n){cin>>a[i];}

    bool you=all_of(!a[1]);
    
    b[0]=0;
    loup(i,1,n+1){
        b[i]=a[i]-a[i-1];
    }

    /*loop(i,n){
        cout<<b[i]<<endl;
    }*/

    n=1000000;
    build(b,1,0,n-1);
    n=1000000;
    builds(b,1,0,n-1);
    //cout<<"yes"<<endl;
    cin>>q;
    while(q--){
        int a,b;cin>>a>>b;
        int m=rmq(1,0,n-1,a,b-1);
        //cout<<m<<endl;
        if(m>k){
            cout<<-1<<endl;
            continue;
        }else{
            double sm=sum(1,0,n-1,a,b-1);
            int ans=ceil(sm/k);
            cout<<ans<<endl;
        }
    }

return 0;}