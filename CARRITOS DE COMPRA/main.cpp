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

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n,m;cin>>n>>m;

    vector<deque<int>> q(300000);

    loop(i,m){
        q[0].push_back(i+1);
    }

    //over(i,q[0]) cout<<i<<" ";

    int t;

    loop(i,m){
        cin>>t;
        for (int j=t;j<300000;j+=t){
            q[j].push_back(i+1);
        }
    }

    loop(i,300000){
        //cout<<i<<" :";
        over(i,q[i]){
            //cout<<i<<"("<<n<<") ";
            if(n==1){cout<<i;return 0;}
            n--;
        }
        cout<<endl;
    }

    /*loop(i,50){
        over(j,q[i]){
            n--;
            if(n==0){cout<<i;return 0;}
        }
    }*/



return 0;}