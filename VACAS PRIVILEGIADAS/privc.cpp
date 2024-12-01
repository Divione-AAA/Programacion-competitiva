/**DUTCH FLAG PROBLEM**/
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

vector<int> linea_perfecta;
int cuenta[3]={0};
int n,nexchanges=0,te;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n;

    cuenta[0]=cuenta[1]=cuenta[2]=0;

    loop(i,n){
        cin>>te;linea_perfecta.PB(te);
        cuenta[--linea_perfecta[i]]++;
    }

    loop(i,cuenta[0]) {
        if (linea_perfecta[i] == 0) continue;
        if (linea_perfecta[i] == 2) {
            int ok = 0;
            for (int j = cuenta[0]+cuenta[1]; j < n; j++) {
                if (linea_perfecta[j] != 0) continue;
                int t = linea_perfecta[i]; linea_perfecta[i] = linea_perfecta[j]; linea_perfecta[j] = t;
                nexchanges++;
                ok = 1;
                break;
            }
            if (ok == 1) continue;
        }

        for (int j = cuenta[0];; j++) {
            if (cuenta[j] != 0) continue;
            int t = cuenta[i]; cuenta[i] = cuenta[j]; cuenta[j] = t;
            nexchanges++;
            break;
        }
        continue;
    }

    for (int i = cuenta[0]; i < cuenta[0]+cuenta[1]; i++) {
        if (cuenta[i] == 1) continue;
        for (int j = cuenta[0]+cuenta[1]; j < n; j++) {
            if (cuenta[j] != 1) continue;
            int t = cuenta[i]; cuenta[i] = cuenta[j]; cuenta[j] = t;
            nexchanges++;
            break;
        }
    }

    cout<<nexchanges;

return 0;}