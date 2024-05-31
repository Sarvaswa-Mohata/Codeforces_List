#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    n%=4;
    vector<int>v{6,8,4,2};
    cout<<v[n];
    return 0;
}