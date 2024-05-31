#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;
    long long int ans=0;
    if(k<=(n+1)/2){
        ans = 2*(k-1)+1;
    }
    else{
        ans = 2*(k-(n+1)/2);
    }
    cout<<ans;
    return 0;
}