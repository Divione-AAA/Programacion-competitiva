#include <bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define loopi(i,n) for(int i=0;i<=n;i++)
#define lup(i,x,n) for(int i=x;i<=n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
#define over(i,a) for(auto i: a)
using namespace std;

int main(){
int a,b;cin>>a>>b;

do{

    if(a==b){
        cout<<"YA"<<endl;break;
    }
    if((a%2==0&&b%2==1)||(a%2==1&&b%2==0)){
        cout<<"YA"<<endl;break;
    }
    if(a>1000&&b>1000){
        cout<<"YA"<<endl;break;
    }
    cout<<"TODAVIA NO"<<endl;
    cin>>a>>b;

}while(true);

return 0;}
