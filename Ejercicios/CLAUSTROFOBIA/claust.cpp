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

int ans=INF,a1,a2,t;

struct vaca{

    int x,y,n;

    bool operator<(const vaca& other){
        return n<other.n;
    }
};

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n;cin>>n;

    vector<vaca> l(n);

    loop(i,n){
        cin>>l[i].x>>l[i].y;
        l[i].n=i+1;
    }

    sortt(l);

    loop(i,n){
        loup(j,i+1,n){
            t=sqrt((pow(l[i].x-l[j].x,2))+(pow(l[i].y-l[j].y,2)));
            if(t<ans){
                ans=t;
                a1=i+1;
                a2=j+1;
            }
        }
    }

    cout<<a1<<" "<<a2;

return 0;}