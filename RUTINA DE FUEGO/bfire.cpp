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

int n,ans=-1;
vector<int> r;
queue<int> q;
vector<bool> w;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    int c=__builtin_ctz(n);
    cout<<((n+(1<<c))>>1)<<endl;
    //cout<<c<<" "<<n<<endl;
/*  r.resize(n+1);
    w.assign(n+1,false);
    r[0]=INT_MIN;

    loup(i,1,n+1){
        r[i]=i;
    }

    int t=1,v;
    bool j=false;

    while(true){
        
        if(!q.empty()){
            v=q.front();
            q.pop();
        }else{
            v=1;
            r[1]=-1;
        }
        
        if(j &&(r[t]==-1|| v==-1)){
            cout<<v;
            return 0;
        }else if(j && w[t]){
            cout<<ans;
            return 0;
        }

        ans=v;

        j=true; 

        w[t]=true;

        if(t+v>n){
            t=v-(n-v);
            
            if(r[t]!=-1){
                q.push(r[t]);
            }else{
                cout<<v;
                return 0;
            }
            
            r[t]=v;
        
        }else{
            
            t=t+v;
            
            if(r[t]!=-1){
                q.push(r[t]);
            }else{
                cout<<v;
                return 0;
            }
            
            r[t]=v;
        }
    }
*/
return 0;}