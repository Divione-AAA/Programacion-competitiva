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

int n,m,t,ans=INT_MIN;
vector<int> nubes(5000,0),ogros(5000,0),nt,ot;
set<int> poso;

void crear_nube(int pos,int range,int id){

    for(int i=0;i<=range;i++){
        nubes[pos+i]=id;
        nubes[pos-i]=id;
    }
}

void answer(int id){

    int a=0;

    over(i,poso){
        
        if(nubes[i]==0){
            a+=(ogros[i]);
        }else if(nubes[i]==id){
            a+=(ogros[i]);
        }
    }
    ans=max(ans,a);
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    ot.resize(n);

    loop(i,n){
        cin>>ot[i];
    }

    loop(i,n){
        cin>>t;
        poso.insert({t});
        ogros[t]=ot[i];
    }

    cin>>m;
    nt.resize(m);

    loop(i,m){
        cin>>nt[i];
    }

    loop(i,m){
        cin>>t;
        crear_nube(nt[i],t,i+1);
    }

    loop(i,m){
        answer(i+1);
    }

    cout<<ans;

return 0;}