#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;
int n,h;
int t[2*N],d[N];

void build(){  //Construyendo el árbol
    for(int i=n-1; i>0; --i)  t[i] = t[i<<1]+ t[i<<1|1];
}

void apply(int p, int value){
    t[p] += value;
    if (p < n) d[p] += value;
}

void build(int p){
    while(p > 1){
        p >>= 1, t[p] = (t[p<<1]+ t[p<<1|1]) + d[p];
    }
}

void push(int p){
    for(int s = h; s > 0; --s){
        int i = p >> s;
        if (d[i] != 0) {
            apply(i<<1, d[i]);
            apply(i<<1|1, d[i]);
            d[i] = 0;
        }
    }
}

void inc(int l, int r, int value){
    l += n, r += n;
    int l0 = l, r0 = r;
    for (; l < r; l >>= 1, r >>= 1){
        if (l&1) apply(l++, value);
        if (r&1) apply(--r, value);
    }
    build(l0);
    build(r0 - 1);
}

int query(int l, int r){
    l += n, r += n;
    push(l);
    push(r - 1);
    int res = 0;
    for (; l < r; l >>= 1, r >>= 1) {
        if (l&1) res += (t[l++]);
        if (r&1) res += (t[--r]);
    }
    return res;
}

int main(){

    cin >> n;
    for(int i=0; i<n; i++) cin >> t[n+i];

    h = sizeof(int)*8 - __builtin_clz(n); //h = altura del árbol
    memset(d, 0, sizeof(d));

    build();

    cout << query(1, 8) << "\n";
    cout << query(6, 8) << "\n";

    //inc(0, 5, 7);
    cout << query(1, 8) << "\n";

    //inc(6, 7, 9);
    cout << query(3, 11) << "\n";

    //inc(8, 12, 5);
    cout << query(0, 12) << "\n";
    return 0;
}
