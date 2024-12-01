#include <bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define loopi(i,n) for(int i=0;i<=n;i++)
#define lup(i,x,n) for(int i=x;i<=n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
#define over(i,a) for(auto i: a)
using namespace std;

int busqueda(vector<ll>& num,ll target){

ll l=0,r=num.size();

while(l<=r){

  ll mid=l+(r-l)/2;

    if(num[mid]==target){
        return mid;
    }
    if(num[mid]<target){
        l=mid+1;
    }else{
         r=mid-1;
    }
}


return -1;
}


int main(){

fast

ll n;cin>>n;

vector<ll> num(n);

loop(i,n){

cin>>num[i];

}

sort(num.begin(),num.end());

cout<<(busqueda(num,8)==-1 ? "0" : "1" );

return 0;}
