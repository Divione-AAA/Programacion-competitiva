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

multiset<char> a;
string s;
bool suerte(){
    int t = atoi(s.c_str());
    int tt = a.count('4')+a.count('7');
    string s = to_string(tt);
    set<char> b;
    for(auto i: s) b.insert(i);
    return (b.count('4')==1 && b.count('7')==1 && b.size()==2) || (b.count('4')==1 || b.count('7')==1 && b.size()==1);
}

int32_t main(){
    fast
    //freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>s;
    over(i,s) a.insert(i);
    cout<<(suerte() ? "YES" : "NO")<<endl;
    return 0;
}