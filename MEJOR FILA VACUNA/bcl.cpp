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

int n;
deque<char> vacas;

int igualdad(char t){
char i=t;
vacas.pop_back();
vacas.pop_front();

char f=vacas.front();
char b=vacas.back();

if(f<b){
    vacas.push_front(i);
    vacas.push_back(i);
    cout<<0<<endl;
    return 0;
}else if(f>b){
    vacas.push_back(i);
    vacas.push_front(i);
    cout<<1<<endl;
    return 1;
}else if(f==b){
    igualdad(f);
    return 0;
}
return 0;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;

    loop(i,n){
        char t;cin>>t;
        vacas.PB(t);
    }

    char b,f;

    while(!vacas.empty()){

        f=vacas.back();
        b=vacas.front();

         if(f<b){
            cout<<f;
            vacas.pop_back();
        }else if(f>b){
            cout<<b;
            vacas.pop_front();
        }else if(f==b){
            int i=igualdad(f);
            if(i==0){
                cout<<f;
                vacas.pop_front();
            }else if(i==1){
                cout<<b;
                vacas.pop_back();
            }
        }
    }

return 0;}