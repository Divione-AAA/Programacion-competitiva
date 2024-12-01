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

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    string s,a,t;cin>>s;
    
    if(s.size()<=3){
        cout<<s;
        return 0;
    }
    
    while(s.size()>0){
        t.push_back(',');
        int q=3;
        while(s.size()!=0 && q){
            a+=s[s.size()-1];
            s.pop_back();
            q--;
        }
        t+=a;
        a=""; 
    }

    reverse(t.begin(),t.end());
    t.pop_back();
       
    cout<<t<<endl;

return 0;}