#include<bits/stdc++.h>
using namespace std;

const double pi=acos(-1);

void salida(double a){

double r=a/2;
double Ac=3.1415926535*pow(r,2);
double Ad=pow(a,2);
double ans=Ad-Ac;
int ANS=Ad-Ac;
string j="";

stringstream flujo;
flujo<<ANS;
j=flujo.str();

int k=j.size();
//cout<<j<<endl;
cout<<setprecision(k+2)<<ans;
}

int main(){

int c;cin>>c;

while(c--){

    double t;cin>>t;
    salida(t);
    cout<<endl;

}

return 0;}
