#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a!=b){
            cout<<"rated";
            return 0;
        }
        v.push_back(a);
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<v[i+1]){
            cout<<"unrated";
            return 0;
        }
    }
    cout<<"maybe";
    return 0;
}