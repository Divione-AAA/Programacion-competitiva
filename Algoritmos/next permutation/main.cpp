#include<bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define over(i,a) for(auto i: a)

const int INF=100000;
const double pi=3.1415926535;

int arr[10]={0,1,2,3,4,5,6,7,8,9};int n=9;

void ver(){

    over(i,arr) cout<<i<<" ";
    cout<<endl;

}

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    do{
        ver();
    }while(next_permutation(arr+0,arr+n+1)==true);

return 0;}