#include <bits/stdc++.H>
using namespace std;

int main(){

string fecha;cin>>fecha;
string penultimos="";
int puntero,puntero2;
puntero=fecha.size()-2;
puntero2=fecha.size()-1;
string t1,t2;t1=fecha[puntero];t2=fecha[puntero2];
penultimos=t1+t2;
int definitiva;
definitiva=atoi(penultimos.c_str());
//cout<<definitiva;

if(definitiva>=74){

    for(auto i=0;i<fecha.size();i++){
        if(i==puntero)cout<<19;
        cout<<fecha[i];
    }
}else if(definitiva<74){

 for(auto i=0;i<fecha.size();i++){
        if(i==puntero)cout<<20;
        cout<<fecha[i];
    }
}


return 0;}
