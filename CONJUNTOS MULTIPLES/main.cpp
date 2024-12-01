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

struct punto{

    int x,y;

    bool operator<(const punto& other)const{
        if(x<other.x && y<other.y){
            return true;
        }else if(x<other.x){
            return true;
        }else if(y<other.y){
            return true;
        }else{
            return false;
        }
    }
};

set<punto> u,v;
int q,n,s,x,y;

void operacion_m(){
    
    cin>>s;

    if(s==1){
        cin>>x>>y;
        u.insert({x,y});
    }else{
        cin>>x>>y;
        v.insert({x,y});
    }
}

void operacion_n(){
    
    cin>>s;

    if(s==1){
        cin>>x>>y;
        u.erase({x,y});
    }else{
        cin>>x>>y;
        v.erase({x,y});
    }
}

void operacion(){

    cin>>n;

    if(n==1){
        operacion_m();
    }else{
        operacion_n();
    }
}

int D(){

    if(u.empty() || v.empty()) return -1;

    pair<int,int> ud,vd;

    ud.first=u.begin()->x;
    ud.second=u.begin()->y;
    vd.first=v.begin()->x;
    vd.second=v.begin()->y;

    //cout<<vd.first<<" "<<vd.second<<endl;

    return max(ud.first+vd.first,ud.second+vd.second);

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>q;

    while(q--){
        operacion();
        cout<<D()<<endl;
    }

return 0;}