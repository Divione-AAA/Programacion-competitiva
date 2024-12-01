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

int n,m,q;
int tabla[50000][50];

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m>>q;
    
    loop(i,n){
        loop(j,m){
            cin>>tabla[i][j];
        }
    }

    q--;

    set<int> c;

    int a,b;cin>>a>>b;
    a--;
    
    loop(i,n){
        if(tabla[i][a]==b){
            //cout<<i<<" ";
            c.insert(i);
        }
    }

    //cout<<endl;

    //over(i,c) cout<<i<<" ";

    set<int> ab;

    while(q--){
        int a,b;cin>>a>>b;
        a--;
        over(i,c){
            //cout<<tabla[i][a]<<" ";
            if(tabla[i][a]!=b){
                //cout<<i<<endl;
                ab.insert(i);
            }
        }
        //cout<<"yes";
    }

    over(i,ab){
        c.erase(i);
    }

    /*loop(i,n){
        //loop(j,m){
            //cout<<tabla[a][i]<<" ";
        //}
        cout<<tabla[i][a];
        cout<<endl;
    }*/

    cout<<c.size();


return 0;}