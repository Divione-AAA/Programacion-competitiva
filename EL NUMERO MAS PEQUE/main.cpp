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

int a,b,c,d,e,f,g;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    while(cin>>a>>b>>c){

        d=a+b+c,e=a+b,f=a+c,g=b+c;

        //cout<<e<<d<<f<<g<<endl;

        for(int i=1;i<100;i++){

            if(i!=d && i!=e && i!=f && i!=g && i!=a && i!=b && i!=c){
                cout<<i<<endl;break;
            }
        }
    }

return 0;}