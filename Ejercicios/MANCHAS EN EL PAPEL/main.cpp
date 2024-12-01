#include<bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define loopi(i,n) for(int i=0;i<=n;i++)
#define lup(i,x,n) for(int i=x;i<=n;i++)
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
#define sortt(a); sort(a.begin(),a.end.())

const int INF=100000;
const double pi=3.1415926535;
char tab[1000][1000];
int m,n;
int t;
void flood(int x,int y){

if(x<0 || y<0 || x>m-1 || y>n-1 || tab[x][y]=='0' || tab[x][y]!='1'){ return;}

t++;
tab[x][y]='0';

flood(x-1,y);
flood(x+1,y);
flood(x,y-1);
flood(x,y+1);

}

int32_t main(){

    cin>>m>>n;
     
    loop(i,m){
        loop(y,n){
            cin>>tab[i][y];
        }
    }

    pair<int,int> ans;
    ans.first=INF;
    ans.second=0;

    loop(i,m){
        loop(y,n){
            if(tab[i][y]=='1') {
                t=0;
                flood(i,y);
                if(t==1) break;
                ans.second=max(ans.second,t);
                ans.first=min(ans.first,t);

            }
        }
    }

    cout<<ans.first<<" "<<ans.second<<endl;

return 0;}