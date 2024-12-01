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

int n,t,answer=0;
vector<vector<int>> adj(1000000);

void dfs(int v,vector<bool>& b){
    b[v]=true;
    over(i,adj[v]){
        if(!b[i]){
            dfs(i,b);
        }
    }
}

void ans(int s){

    vector<bool> u(n,false);
    dfs(s,u);
    int r=1;
    loop(i,n){
        if(i==s){
            continue;
        }else if(!u[i]){
            dfs(i,u);
            r++;
        }
    }
    answer=max(answer,r);
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;

    loop(i,n){
        cin>>t;
        t--;
        adj[i].PB(t);
    }

    loop(i,n){
        ans(i);
    }

    cout<<answer;

return 0;}