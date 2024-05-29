#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back({ele,i});
    }
    sort(v.rbegin(),v.rend());
    int temp=0;

    for(int i=0;i<n;i++){
        while(temp<n && v[temp].second<=i){
            cout<<v[temp].first<<" ";
            temp++;
        }
        cout<<endl;
    }
}