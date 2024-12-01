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
#define sortt(a); sort(a.begin(),a.end())

vector<int> distancia;
int n,c,t,a,tc,ans;

int32_t main(){

    cin>>n>>c;

    loop(i,n){

        cin>>t;
        if(t==c){a++;}
             
        if(t==c  && a>=2){
            
            distancia.PB((i-tc)-1);
            tc=i;
        }
    }

    //over(i,distancia) cout<<i<<" ";

    if(a>=2){

        sortt(distancia);

        ans=distancia[0];

        cout<<ans;

    }else{

        cout<<-1;
    
    }
return 0;}