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

int t[4*10000000],a[10000000],n,d,li=0,ld=10000000,b,c;
queue<pair<int,int>> q;

void build(int a[],int v,int tl,int tr){

    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = max(t[v*2],t[v*2+1]);
    }
}

int rmq(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return max(rmq(v*2, tl, tm, l, min(r, tm)),rmq(v*2+1, tm+1, tr, max(l, tm+1), r));
}

int32_t main(){
	
	fast
	freopen("crowded.in", "r", stdin);freopen("crowded.out", "w", stdout);

    cin>>n>>d;

    cout<<"yes"<<endl;
    
    loop(i,n){
        cin>>b>>c;
        a[b]=c;
        q.push({b,c});
    }

    n=10000000;

    build(a,1,0,n-1);

    int ans=0;

    while(!q.empty()){

        int v=q.front().first,w=q.front().second*2;q.pop();

        int derecha=(v+d);
        int izquierda=(v-d);

        derecha=min(derecha,ld);
        izquierda=max(izquierda,li);

        //cout<<izquierda<<" "<<derecha<<endl;
        
        int vl=rmq(1,0,n-1,izquierda,v-1);
        int vr=rmq(1,0,n-1,v+1,derecha);

        //cout<<vl<<" "<<vr<<endl;

        if(vl>=w && vr>=w){
            ans++;
        }

    }

    cout<<ans<<endl;

return 0;}