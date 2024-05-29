#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sort(v.begin(),v.end());
    int cnt=2;
    for(int i=1;i<v.size()-1;i++){
        if(v[i]==v[0]){
            cnt++;
        }
        else{
            break;
        }
    }
    for(int i=v.size()-2;i>=0;i--){
        if(v[i]==v[v.size()-1]){
            cnt++;
        }
        else{
            break;
        }
    }

    if(n-cnt<=0){
        cout<<0;
        return 0;
    }
    cout<<n-cnt;
}