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

int ans=INT_MAX;
vector<string> s(3,"");

int donde(string s1,string r){
    
    int pos=0;

    if(r.size()==0){
        return -1;
    }

    loop(i,r.size()){
        string t=r.substr(r.size()-i-1,i+1);
        string t2=s1.substr(0,i+1);
        if(t==t2){
            int o=t.size();
            pos=max(pos,o);
        }
    }

return pos;

}

void backtracking(string r,vector<bool>& q){

    bool used=true;
    int it=0;
    over(i,q){
        if(!i){
            used=false;
            string t=r;
            int p=donde(s[it],r);
            int o=s[it].size();
            if(p>0){
                string t1=s[it].substr(p,o-p);
                t=t+t1;
            }else if(p==0){
                t=t+s[it];
            }else if(p==-1){
                t=s[it];
            }
            vector<bool> j=q;
            j[it]=true;
            backtracking(t,j);
        }
        it++;
    }

    if(used){
        int o=r.size();
        ans=min(ans,o);
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);
    
    vector<bool> q(3,false);
    cin>>s[0]>>s[1]>>s[2];
    
    string r="";
    backtracking(r,q);
    cout<<ans<<endl;

return 0;}