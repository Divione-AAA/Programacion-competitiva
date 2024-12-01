#include<bits/stdc++.h>
using namespace std;

int main(){

int c;cin>>c;
int t=0;
string r;cin>>r;
bool b=true;

for(unsigned int i=0;i<r.size();i++){

    if(r[i]=='S'){t++;}
    else if(r[i]=='L'&& r[i+1]=='L'){

          if(b){t=t+2;i++;b=false;}
          else {t++,i++;}
    }
}

cout<<t;

return 0;}
