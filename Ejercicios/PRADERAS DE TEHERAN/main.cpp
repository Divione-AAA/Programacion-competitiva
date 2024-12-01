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

vector<string> tablero(100005,"");
int n,m,ans=0;

void leer(){

    cin>>n>>m;

    loop(i,n){
        cin>>tablero[i];
    }
}

void flood_fill(int x,int y,int n1,int m1, vector<string>& adj){

if(x<0 || y<0 || x>n1-1 || y>m1-1 || adj[x][y]=='0') return;
adj[x][y]='0';
flood_fill(x+1,y,n1,m1,adj);
flood_fill(x,y-1,n1,m1,adj);
flood_fill(x-1,y,n1,m1,adj);
flood_fill(x,y+1,n1,m1,adj);

}

void launcher(int i,int j, vector<string>& adj){

    vector<string> d=adj;

    loop(k,d.size()){
        loop(l,m){
            if(d[k][l]=='1'){
                ans++;
                flood_fill(k,l,d.size(),m,d);
            }
        }
    }
}

void answer(){

    int j;
    vector<string> l;
    
    loup(i,0,n){
        for(j=i;j<n;j++){
            l.clear();
            for(int k=i;k<=j;k++){
                l.push_back(tablero[k]);
            } 
        launcher(i,j,l);
        }   
    }
}

int32_t main(){

	fast
    leer();
    answer();
    cout<<ans;

return 0;}