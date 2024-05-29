#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        v[ele-1] = i;
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}