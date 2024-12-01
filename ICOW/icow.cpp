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

int n,t;

struct track{

int name;
int points;

    bool operator<(track const& other){
        return points<other.points;
    }
};

void rest_points(const int& rest,vector<track>& playlist){

int cont=0;

    over(i,playlist){
        if(cont>=rest){return;}
        else if(i.name>=rest){i.points+=1;cont++;}
    }
}

void points_distribution(const int& neg,int points,vector<track>& playlist){

    int pivotte=points/n-1;
    int rest=points%n-1;

    if(points%n-1==0){

        over(i,playlist){

            if(i.name==neg) continue;
            else i.points+=pivotte;

        }

    }else{

        over(i,playlist){

            if(i.name==neg) continue;
            else i.points+=pivotte;

        }

        rest_points(rest,playlist);
    
    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>t;

    vector<track> playlist;

    loop(i,n){
        int v;cin>>v;
        track t;
        t.name=i+1;
        t.points=v;
        playlist.PB(t);
    }

    int f,c;

    loop(i,t){

        sortt(playlist);
        f=playlist[n-1].name;
        cout<<f<<" "<<playlist[n-1].points<<endl;
        c=playlist[n-1].points;
        playlist[n-1].points=0;
        points_distribution(f,c,playlist);

    }

return 0;}