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

vector<bool> criba(100,false);
int n,t;

void ans(){

    loup(i,1,100){
        if(i%3==0){criba[i-1]=true;}
        else if(i%7==0){criba[i-1]=true;}
    }

    loop(i,100){
        loop(j,100){
            if(criba[i]==true && criba[j]==true){
                t=(i+1)+(j+1);
                if(t<=100){
                    criba[t-1]=true;
                }
            }
        }
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;

    ans();

    //loop(i,100)cout<<criba[i];

    while(n--){
        
        cin>>t;
        cout<<(criba[t-1] ? "YES" : "NO")<<endl;

    }

return 0;}