#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'

int n,t;
map<int,int> mapa;
vector<int> combinaciones;

void backtrack(string st, int size, char conjunto[]) {
    if (st.length() == size) {
        int num = stoi(st); 
        combinaciones.push_back(num);
        return;
    }
    for (int i = 0; i < 3; i++) {
        backtrack(st + conjunto[i], size, conjunto);
    }
}

void generar_combinaciones(int size) {
    char conjunto[3] = {'1', '2', '3'};
    //combinaciones.clear();
    backtrack("", size, conjunto);
}

int bigger(int n){
    int l=0,r=combinaciones.size()-1,result;
    while(l<=r){
        int mid = (l+r)/2;
        //cout<<combinaciones[mid]<<" "<<n<<endl;
        if(combinaciones[mid]>n){
            r = mid-1;
        }else if(combinaciones[mid]<n){
            l = mid+1;
            result=combinaciones[mid];
        }
    }
    //cout<<result<<endl;
    return result;
}

int solucion(int n){
    
    if(mapa.count(n)){
        return mapa[n];
        cout<<n<<endl;
    }


    int mayor = bigger(n);
    mapa[n] = solucion(n-mayor)+1;
    //cout<<mapa[n]<<" "<<n<<endl;
    return mapa[n];
}

int32_t main(){
    fast
    cin >> n;
    for(int i=1;i<=5;i++){
        generar_combinaciones(i);
    }

    for(auto i: combinaciones){
        //cout<<i<<endl;
        mapa.insert({i,1});
    }

    while(n--){
        cin>>t;
        cout<<solucion(t)<<endl;
        //cout<<mapa[6667]<<endl;
    }

return 0;}
