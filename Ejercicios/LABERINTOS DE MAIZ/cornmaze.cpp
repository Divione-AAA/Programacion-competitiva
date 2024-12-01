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

char tabla[305][305];
bool mapa[305][305]={false};
int n,m;

struct nodo{
    int x,y,pasos;
};

struct agujeros{

    char name;
    pair<int,int> f,s;

    bool operator<(agujeros const& other)const{
        return name < other.name;
    }

    pair<int,int> match(int x,int y){
        if(f.first==x && f.second==y){
            return s;
        }else{
            return f;
        }
    }
};

bool verificacion(int x,int y){
    return x>=0 && y>=0 && x<n && y<m && (tabla[x][y]!='#');
}

bool es_agujero(int x,int y){
    return tabla[x][y]!='#' && tabla[x][y]!='.' && tabla[x][y]!='@' && tabla[x][y]!='=';
}

bool esta_visitado(int x,int y){
    return !(mapa[x][y]);
}

void establecimiento(set<char>& qc,set<agujeros>& conjunto){

    over(h,qc){

        agujeros t;
        t.name=h;
        pair<int,int> f,s;
        bool fp=true;
        //cout<<h<<endl;
        
        loop(i,n){
            loop(j,m){ 
                if(tabla[i][j]==h && fp){
                    fp=false;
                    f.first=i,f.second=j;
                    //cout<<i<<" "<<j<<endl;
                    //cout<<tabla[i][j]<<endl;
                }else if(tabla[i][j]==h){
                    s.first=i,s.second=j;
                    //cout<<i<<" "<<j<<endl;
                    //cout<<tabla[i][j]<<endl;
                    break;
                }
            }
        }
        conjunto.insert({h,f,s});
    }
}

void mostrar_tabla(){

    loop(i,n){
        loop(j,m){
            cout<<tabla[i][j];
        }
    cout<<endl;
    }
}

void mostrar_bool(){

    loop(i,n){
        loop(j,m){
            cout<<mapa[i][j];
        }
    cout<<endl;
    }
    cout<<endl;
}


pair<int,int> buscar_par(char w,set<agujeros>& conjunto,int x,int y){
    over(i,conjunto){
        if(i.name==w){
            return(i.match(x,y));
        }
    }
    pair<int,int> l;
    l.first=0,l.second=0;
    return l;
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    set<agujeros> conjunto;
    set<char> qc;
    nodo padre,hijo;
    queue<nodo> q;
    cin>>n>>m;
    pair<int,int> start,ender;

    loop(i,n){
        loop(j,m){
            cin>>tabla[i][j];
            mapa[i][j]=false;
            if(tabla[i][j]=='@'){
                start=make_pair(i,j);
            }
            if(tabla[i][j]=='='){
                ender=make_pair(i,j);
            }
            if(es_agujero(i,j)){
                qc.insert(tabla[i][j]);
            }
        }
    }

    establecimiento(qc,conjunto);
    //mostrar_tabla();

    padre.pasos=0;
    padre.x=start.first;
    padre.y=start.second;

    //cout<<tabla[padre.x][padre.y];

    q.push(padre);
    mapa[padre.x][padre.y]=true;

    while(!q.empty()){

        padre=q.front();q.pop();
       
        if(tabla[padre.x][padre.y]=='='){
            cout<<padre.pasos;
            return 0;
        }

        //mostrar_bool();
        
        //norte
        hijo=padre;
        hijo.x++;
        
        if(verificacion(hijo.x,hijo.y) && esta_visitado(hijo.x,hijo.y)){
            if(es_agujero(hijo.x,hijo.y)){
                
                pair<int,int> t=buscar_par(tabla[hijo.x][hijo.y],conjunto,hijo.x,hijo.y);
                hijo.pasos++;
                hijo.x=t.first;
                hijo.y=t.second;
                q.push(hijo);
                //mapa[hijo.x][hijo.y]=true;
            
            }else{
            
            hijo=padre;
            hijo.x++;
            hijo.pasos++;
            q.push(hijo);
            mapa[hijo.x][hijo.y]=true;
            }
        }

        //sur
        hijo=padre;
        hijo.x--;
        
        if(verificacion(hijo.x,hijo.y) && esta_visitado(hijo.x,hijo.y)){
            if(es_agujero(hijo.x,hijo.y)){
                //cout<<"yes"<<endl;
                pair<int,int> t=buscar_par(tabla[hijo.x][hijo.y],conjunto,hijo.x,hijo.y);
                hijo.pasos++;
                hijo.x=t.first;
                hijo.y=t.second;
                q.push(hijo);
                //mapa[hijo.x][hijo.y]=true;
            
            }else{
            
            hijo=padre;
            hijo.x--;
            hijo.pasos++;
            q.push(hijo);
            mapa[hijo.x][hijo.y]=true;
            }
        }

        //este
        hijo=padre;
        hijo.y++;
        
        if(verificacion(hijo.x,hijo.y) && esta_visitado(hijo.x,hijo.y)){
            if(es_agujero(hijo.x,hijo.y)){
                
                pair<int,int> t=buscar_par(tabla[hijo.x][hijo.y],conjunto,hijo.x,hijo.y);
                hijo.pasos++;
                hijo.x=t.first;
                hijo.y=t.second;
                q.push(hijo);
                //mapa[hijo.x][hijo.y]=true;
            
            }else{
            
            hijo=padre;
            hijo.y++;
            hijo.pasos++;
            q.push(hijo);
            mapa[hijo.x][hijo.y]=true;
            }
        }

        //oeste
        hijo=padre;
        hijo.y--;
        
        if(verificacion(hijo.x,hijo.y) && esta_visitado(hijo.x,hijo.y)){
            if(es_agujero(hijo.x,hijo.y)){
                
                pair<int,int> t=buscar_par(tabla[hijo.x][hijo.y],conjunto,hijo.x,hijo.y);
                hijo.pasos++;
                hijo.x=t.first;
                hijo.y=t.second;
                q.push(hijo);
                //mapa[hijo.x][hijo.y]=true;
            
            }else{
            
            hijo=padre;
            hijo.y--;
            hijo.pasos++;
            q.push(hijo);
            mapa[hijo.x][hijo.y]=true;
            }
        }
    }

    cout<<-1<<endl;

return 0;}