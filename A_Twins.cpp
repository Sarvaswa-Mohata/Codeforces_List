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
    sort(v.rbegin(),v.rend());
    int target = (accumulate(v.begin(),v.end(),0))/2;
    int sum=0, cnt=0;
    for(int i=0;i<v.size();i++){
        if(sum>target){
            break;
        }
        sum+=v[i];
        cnt++;
    }
    cout<<cnt;
}