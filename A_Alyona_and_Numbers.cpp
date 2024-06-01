#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;
    if(m<n){
        swap(m,n);
    }
    long long int ans=0;
    for(long long int i=5;i<=(long long int)(m+n)/5*5;i+=5){
        ans+=min({n-max(i-m,(long long int)0)+1,i-1,n});
    }
    cout<<ans;
}