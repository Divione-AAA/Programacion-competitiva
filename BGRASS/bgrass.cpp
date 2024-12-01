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
char arreglo[105][105];
int n,c;

void flood_fill(int x,int y){

if(x<0 || y<0 || x>n-1 || y>c-1 || arreglo[x][y]!='#') return ;

arreglo[x][y]='.';

flood_fill(x+1,y);
flood_fill(x-1,y);
flood_fill(x,y-1);
flood_fill(x,y+1);

}

int32_t main(){
	
	fast

    cin>>n>>c;

    loop(i,n){
        loop(j,c){
            cin>>arreglo[i][j];
        }
    }

    int ans=0;

    loop(i,n){
        loop(j,c){
            if(arreglo[i][j]=='#'){
                flood_fill(i,j);
                ans++;
            }
        }
    }

    cout<<ans<<endl;

return 0;}