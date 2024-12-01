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

double d;

struct vaca{
    int posicion,x,y;
    bool sentada=false;
};

struct mesa{
    int x,y,nombre=0,posicion;
    double distmin=INF;
    
};

double dist(vaca a,mesa b){

    d=sqrt(pow(a.x-b.x,2)+pow((a.y-b.y),2));
    //cout<<"distancia de "<<a.posicion<<" para mesa "<< b.posicion<<" "<<d<<endl;
    return d;
}

vaca entrda;
mesa asiento;
vector<vaca> listas;
vector<mesa> listas_mesa;
int n,m,t,t1,t2;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>m;
    listas.resize(n);
    listas_mesa.resize(m);

    if(n==m){
        cout<<0;
        return 0;
    }

    loop(i,n){
        cin>>t1>>t2;
        entrda.posicion=i+1;
        entrda.x=t1,entrda.y=t2;
        listas[i]=entrda;
    }

    /*cout<<listas.size()<<endl;

    over(i,listas){
        cout<<i.posicion<<endl;
    }*/

    loop(i,m){
        cin>>t1>>t2;
        asiento.x=t1,asiento.y=t2,asiento.posicion=i+1;
        listas_mesa[i]=asiento;
        over(j,listas){
            d=dist(j,asiento);
            if((d<listas_mesa[i].distmin)&&(!j.sentada)){
                listas_mesa[i].distmin=d;
                if(listas_mesa[i].nombre>0)listas[listas_mesa[i].nombre-1].sentada=false;
                listas_mesa[i].nombre=j.posicion;
                //cout<<"la menor es "<<j.posicion<<" y su estdia es "<<j.sentada<<endl;
                j.sentada=true;
                listas[j.posicion-1].sentada=true;

            }
        }
    }

    set<int> ans;

    over(i,listas_mesa){
        //cout<<i.nombre<<" "<<i.distmin<<" "<<endl;
        ans.insert(i.nombre);
    }

    lup(i,1,n){
        if(!(ans.count(i))) cout<<i<<endl;
    }


return 0;}