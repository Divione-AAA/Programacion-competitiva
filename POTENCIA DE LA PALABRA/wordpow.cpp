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

int n,k;
vector<string> str;
vector<string> good;

int ansd(string s,string p){

int t=0;
int pos=0;
for(int i=0;i<p.size();i++){
    for(int j=pos;j<s.size();j++){
        if(s[j]==p[i]){t++;pos=j+1;break;}
    }
}
//cout<<"tam: "<<t<<endl;
return t==p.size() ? 1 : 0;
}

int ans(string st){
    
    int an=0;
    
    over(i,good){
        an=an+ansd(st,i);
    }

return an;
}

void conv(string & st){

    loop(i,st.size()){
        st[i]=tolower(st[i]);
    }
}

int32_t main(){
	
	fast
	//freopen("wordpow.in", "r", stdin);freopen("wordpow.out", "w", stdout);

    cin>>n>>k;

    loop(i,n){
        string t;cin>>t;conv(t);str.PB(t);
    }

    loop(i,k){
        string t;cin>>t;conv(t);good.PB(t);
    }

    int y;

    for(auto i: str){
        //y=ans(i);
        cout<<ans(i)<<endl;
    }

return 0;}