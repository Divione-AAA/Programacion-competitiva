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

int32_t main(){

    fast

    freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    int n, b, k;

    cin >> n >> b;
    vector<int> peso(b);
    for(int i=0; i<b; i++){
        cin >> peso[i];
    }

    vector<bool> mochila(n+1);
    fill(mochila.begin(), mochila.end(), false);
    mochila[0] = true;

    for(int i=0; i<b; i++){
        k = peso[i];
        for(int j=n; j>=0; j--){
            if(mochila[j] && j+k<=n)  mochila[j+k]=true;
        }
    }

    int t;
    for(int t=n; t>=0 && !mochila[t]; t--);
    cout << t << "\n";

return 0;}