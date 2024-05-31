#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    double ans=0;
    for(int i=1;i<v.size();i++){
        ans+=sqrt(pow(v[i].first-v[i-1].first,2)+pow(v[i].second-v[i-1].second,2));
    }
    printf("%.9f",(double)(ans*k)/50);
}