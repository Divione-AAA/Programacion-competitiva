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

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int m,c;cin>>m>>c;

    vector<pair<int,int>> monedas(m);

    loop(i,m){
        cin>>monedas[i].first>>monedas[i].second;
    }

    sortt(monedas);

   /*over(i,monedas){
        cout<<i.first<<" "<<i.second<<endl;
    }*/

    int w=0,suma=0;

    while(m--){

        //cout<<m<<" ";

        while(monedas[m].second--){
            suma+=monedas[m].first;
            if(suma>=c){w++;suma=0;}
        }
    }

    cout<<w;

return 0;}