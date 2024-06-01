#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<=2*n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<2*n+1;i++){
        if(i%2 && v[i]-1>v[i-1] && v[i]-1>v[i+1] && --k>=0){
            --v[i];
        }
        cout<<v[i]<<" ";
    }
    return 0;
}