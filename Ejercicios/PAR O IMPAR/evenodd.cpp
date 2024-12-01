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

bool answer(string j){
return j[j.size()-1]=='0' || j[j.size()-1]=='2' || j[j.size()-1]=='4' || j[j.size()-1]=='6' || j[j.size()-1]=='8';
}

int32_t main(){
	
	fast
	freopen("evenodd.in", "r", stdin);freopen("evenodd.out", "w", stdout);

    int n;cin>>n;
    string j;

    while(n--){
        cin>>j;
        cout<<(answer(j) ? "even" : "odd")<<endl;
    }

return 0;}