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

deque<int> q;
int n,p,ans=0;

void answer(deque<int> m){

    bool tomar=false;

    int sum=0;
    
        while(!m.empty()){

            tomar=(!tomar);
            //cout<<tomar<<endl;

            int a=m.front(),b=m.back();

            if(a==b && m.size()>1) cout<<":)"<<endl;

            if(a>b){
                if(tomar)sum+=m.front();
                m.pop_front();
            }else{
                if(tomar)sum+=m.back();
                m.pop_back(); 
            }
            //cout<<sum<<endl;
        }
    ans=sum;
}

int32_t main(){

	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    
    loop(i,n){
        cin>>p;
        q.push_back(p);
    }

    answer(q);
    cout<<ans;

return 0;}