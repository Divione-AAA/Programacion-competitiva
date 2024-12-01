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

    int n;cin>>n;

    vector<int> divisores;

    loup(i,1,n+1){
        if(n%i==0){divisores.PB(i);}
    }

    int l=0,r=divisores.size()-1,t=INF,ans1,ans2;

    while(l<=r){
        
        //cout<<divisores[l]<<" "<<divisores[r]<<endl;
        
        if(abs(divisores[l]-divisores[r])<t){
            t=abs(divisores[l]-divisores[r]);
            ans1=divisores[l],ans2=divisores[r];
        }

        r--,l++;
    }

    cout<<ans1<<" "<<ans2<<endl;

return 0;}