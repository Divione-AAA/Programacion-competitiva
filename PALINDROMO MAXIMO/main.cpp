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

int o,n;
string s,t;
set<string> q,p;

void substrings(){
    
    loop(i,s.size()){
        loup(j,i+1,s.size()){
            t=s.substr(i,o-j);
            q.insert(t);
        }
    }
}

bool palindromo(string u){
    int l=0,r=u.size()-1;
    while(l<=r){
        if(u[l]!=u[r]){
            return false;
        }
        l++,r--;
    }
    return true;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);
    
    cin>>s;
    o=s.size();
    substrings();

    over(i,q){
        if(palindromo(i)){
            p.insert(i);
        }
    }

    string ans="";

    over(i,p){

        o=i.size();
        n=ans.size();

        if(o>n){
            ans=i;
        }else if(o==n){
            ans=max(ans,i);
        }
    }

    cout<<ans;


return 0;}