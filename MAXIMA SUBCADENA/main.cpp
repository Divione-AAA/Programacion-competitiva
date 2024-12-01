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

int n,o;
string s,t,a="";
set<string> q1;
multiset<string> q2;

void subcadenas(){
    
    loop(i,s.size()){
        loup(j,i,s.size()){
            
            t=s.substr(i,o-j);
            q1.insert(t);
            q2.insert(t);

        }
    }
}

void ans(){

    n=0;
    over(i,q1){
        o=q2.count(i);
        if(o==n){
            n=o;
            if(a.size()<i.size()){
                a=i;
            }else if(a.size()==i.size()){
                a=max(a,i);
            }
        }else if(o>n){
            n=o;
            a=i;
        }
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>s;
    o=s.size();
    subcadenas();
    ans();
    cout<<a<<endl;

return 0;}