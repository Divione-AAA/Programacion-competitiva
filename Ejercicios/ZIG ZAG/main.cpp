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
#define sortt(a); sort(a.begin(),a.end.())

const int INF=100000;
const double pi=3.1415926535;

int n;
int original[1005][1005];
int tabla[1005][1005];

int32_t main(){

    cin>>n;

    loop(i,n){
        loop(j,n){
            cin>>original[i][j];
        }
    }

    tabla[0][0]=original[0][0];

    pair<int,int> sup,izq;
    int arriba,izquierda;

    loup(i,1,n) tabla[0][i] = tabla[0][i-1] + original[0][i];
    loup(i,1,n) tabla[i][0] = tabla[i-1][0] + original[i][0];

    loup(i,1,n){
        loup(j,1,n){

            sup=MP(i-1,j);
            izq=MP(i,j-1);

            arriba=original[i][j]+tabla[sup.first][sup.second];
            izquierda=original[i][j]+tabla[izq.first][izq.second];

            tabla[i][j]=max(arriba,izquierda);

        }
    }

    cout<<tabla[n-1][n-1];

return 0;}