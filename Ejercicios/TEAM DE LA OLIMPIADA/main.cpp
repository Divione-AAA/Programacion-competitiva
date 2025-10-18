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

int n;
vector<int> m;
vector<vector<int>> h;
bool u,d,t;

void solve(vector<int> &a){
    if(a.size()==3){
        //over(i,a) cout<<i<<" ";
        h.PB(a);
        //cout<<endl;
        return;
    }

    vector<int> ans = a;

    if(ans.size()==0){
        loop(i,m.size()){
            if(m[i]==1){
                //cout<<"este es:"<<i+1<<endl;
                m[i]=-1;
                ans.PB(i+1);
                solve(ans);
                ans.clear();
            }
        }
    }else if(ans.size()==1){
        loop(i,m.size()){
            if(m[i]==2){
                //cout<<"este es:"<<i+1<<endl;
                m[i]=-1;
                ans.PB(i+1);
                solve(ans);
                break;
            }
        }
    }else if(ans.size()==2){
        loop(i,m.size()){
            if(m[i]==3){
                m[i]=-1;
                ans.PB(i+1);
                solve(ans);
                break;
            }
        }
    }
}

int32_t main(){
    fast
    //freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    m.resize(n);
    loop(i,n){
        cin>>m[i];
        if(m[i]==1) u=true;
        else if(m[i]==2) d=true;
        else t=true;
    }
    vector<int> p;
    if(u && d && t){
        solve(p);
        cout<<h.size()<<endl;
        over(i,h){
            over(j,i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<0<<endl;
    }

    return 0;
}