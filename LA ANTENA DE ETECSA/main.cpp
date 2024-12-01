#include<bits/stdc++.h>
using namespace std;

#define int long double
 
int n,k,r;

int answer(){

    int a=n;
    int b=r;

    return sqrt((a*a)+(b*b));

}

int32_t main(){

cin>>n>>k>>r;
cout<<floor(answer()*k);

return 0;}