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

int n;
string s;



int optimo(int n){
    if(n>=3){
        return 1+optimo(n-3);
    }else if(n==2){
        return 1+optimo(n-2);
    }else if(n==1){
        return 1+optimo(n-1);
    }else{
        return 0;
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    while(n--){
        cin>>s;
        int longi = s.length();
        int u = s[s.length()-1]-'0';
        int res =optimo(u);
        int cont =0;
        bool restar = false ;
        
        for(int i =longi-2 ; i>=0 ; i--){
            int digitprev = s[i]-'0';
            int digitnext = s[i+1]-'0';


            if(optimo(digitprev)>res){
                restar = true ;
                // revisar si es menor que tres porque entonces no se puede expresar correctamente como las combinaciones necesarias
                cont+=10;
            }else {
                restar = false ;
            }
        }

        res = optimo(u+cont);
        cout<<res<<endl;
        
    }



return 0;}


