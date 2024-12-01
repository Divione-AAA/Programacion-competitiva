#include <bits/stdc++.h>
using namespace std;

int main(){

vector<long long> num;

int c;cin>>c;

for(int i=0;i<c;i++)cin>>num[i];

sort(num.begin(),num.end());
int target;cin>>target;

int l=0,r=num.size();

while(l<=r){

    long long int mid=l+(r-l)/2;

    if(num[mid]==target){
        cout<<"yes"<<endl;return 0;
    }
    if(num[mid]<target){
        l=mid+1;
    }else{
        r=mid-1;
    }

}

cout<<-1<<endl;

return 0;}
