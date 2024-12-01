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

set<string> q;
vector<string> q1;
string t="",r="";
int n;

void cinclear(){
    cin.clear();
    cin.ignore(INT_MAX,'\n');
}

void tratar_grabacion(){
    
    int k=0;
    string a="";

    loop(i,t.size()){
        if(t[i]!=' '){
            a+=t[i];
        }else{
            q1.PB(a);
            a="";
        }
    }
}

void quien(){

    int c=0;
    string a="";

    loop(i,r.size()){
        if(r[i]==' '){
            c++;
            continue;
        }else if(c==2){
            a+=r[i];
        }
    }

    q.insert(a);

}

void answer(){
    over(i,q1){
        if(q.count(i)==0){
            cout<<i<<" ";
        }
    }
}

void iniciar(){
    
    cinclear();
    q.clear();
    q1.clear();

    getline(cin,t);
    tratar_grabacion();
    while(r!="what does the fox say?"){
        getline(cin,r);
        quien();
    }

    answer();

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;
    
    while(n--){
        iniciar();
    }

return 0;}