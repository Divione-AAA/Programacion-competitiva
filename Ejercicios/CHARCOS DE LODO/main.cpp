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

int  x,y,n,t1,t2;
char mapa[1005][1005]={'*'};
bool vis[1005][1005];

struct node{
	int x,y,dist=0;
};

bool verificacion(node p){
	return p.x>=0 && p.x<=1000 && p.y>=0 && p.y<=1000 && mapa[p.x][p.y]=='*' && vis[p.x][p.y]==false;
}

int bfs(){
	queue<node> q;
	node p;
	q.push({500,500,0});
	vis[0][0]=true;
	//cout<<"test"<<endl;
	while(!q.empty()){
		
		node nodo=q.front();
		q.pop();

		if((nodo.x==x && nodo.y==y) || (mapa[nodo.x][nodo.y]=='B')){
			//cout<<mapa[nodo.x][nodo.y]<<endl;
			return nodo.dist;
		}

		//cout<<nodo.x<<" "<<nodo.y<<endl;

		vis[nodo.x][nodo.y]=true;
		//norte
		if(verificacion({nodo.x+1,nodo.y,nodo.dist+1})){
			//cout<<"test"<<endl;
			q.push({nodo.x+1,nodo.y,nodo.dist+1});
			vis[nodo.x+1][nodo.y]=true;
		}
		//sur
		if(verificacion({nodo.x,nodo.y+1,nodo.dist+1})){
			//cout<<"test"<<endl;
			q.push({nodo.x,nodo.y+1,nodo.dist+1});
			vis[nodo.x][nodo.y+1]=true;
		}
		//este
		if(verificacion({nodo.x-1,nodo.y,nodo.dist+1})){
			//cout<<"test"<<endl;
			q.push({nodo.x-1,nodo.y,nodo.dist+1});
			vis[nodo.x-1][nodo.y]=true;
		}
		//oeste
		if(verificacion({nodo.x,nodo.y-1,nodo.dist+1})){
			//cout<<"test"<<endl;
			q.push({nodo.x,nodo.y-1,nodo.dist+1});
			vis[nodo.x][nodo.y-1]=true;
		}

	}
	return -1;
}

void changeDirection(int &x){
	if(x<0){
		x=500+x;
		//cout<<t1<<endl;
	}else{
		x=500+x;
		//cout<<t1<<endl;
	}
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

	cin>>x>>y>>n;
	changeDirection(x);
	changeDirection(y);
	mapa[x][y]='B';
	//cout<<x<<" "<<y<<endl;

	loop(i,1005){
		loop(j,1005){
			mapa[i][j]='*';
		}
	}

	while(n--){
		cin>>t1>>t2;
		changeDirection(t1);
		changeDirection(t2);
		mapa[t1][t2]='#';
		//cout<<t1<<" "<<t2<<endl;
	}

	cout<<bfs();
	//cout<<1<<endl;

return 0;}