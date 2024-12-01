#include <bits/stdc++.h>
using namespace std;

#define loop(a,n) for(int a=0;a<n;a++)

int main(){

    deque<int> fila;

    fila.push_back(1);
    fila.push_back(2);
    fila.push_front(5);
    fila.push_front(4);
    fila.push_back(3);
    fila.push_front(6);


    int i=fila.size();
    while(i--){

        cout<<fila[i]<<" ";

    }


    return 0;
}
