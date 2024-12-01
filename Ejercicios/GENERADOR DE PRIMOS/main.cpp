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

bitset<10000005> primos;

void prim(){

    int n = 10000000;

    primos.set();  //Todos los bits puestos a 1.
    primos[0] = primos[1] = 0;
    for(int i=4; i<=n; i+=2)  primos[i]=0; //Tachando todos los pares > 2.

    for(int i=3; i*i<=n; i+=2){
        if(primos[i]){
            for(int j=i*i; j<=n; j+=2*i) primos[j]=0;
            /**
             j siempre será impar y la incrementamos en
             2*i (número par) pues (impar + par = impar),
             pues los múltiplos pares de j los tachamos
             al inicio.
            */
        }
    }
}

void impresion(int a,int b){

    for(int i=a;i<=b;i++){

        if(primos[i]) cout<<i<<endl;

    }
}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n;cin>>n;

    int a,b;

    prim();

    while(n--){

        cin>>a>>b;
        impresion(a,b);
        cout<<endl;

    }
    
return 0;}