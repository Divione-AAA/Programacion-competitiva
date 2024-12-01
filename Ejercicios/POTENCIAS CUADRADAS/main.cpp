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

int n,a,b,retu,ans=0,mid,p,s;
double r,t,l;

int answer(int r){

    t=sqrt(r);

    l=0;r=t;//cout<<t<<" ";

    while(l<=r){

        mid=l+(r-l)/2;
        //cout<<mid<<" ";
        p=pow(2,mid);

        if(p<=t){
            retu=max(retu,mid);
        }

        if(p<t){
            l=mid+1;
        }else{
            r=mid-1;
        }

    }
    s=pow(2,retu);
    return s;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;

    while(n--){

        cin>>a>>b;
        ans=0;

        loup(i,a,b+1){
            ans+=answer(i);
            //cout<<answer(i)<<" ";
        }
    cout<<ans<<endl;
    }

return 0;}