#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<v.size();i++){
        long long int temp1 = (i==0) ? INT_MAX : v[i]-v[i-1];
        long long int temp2 = (i==v.size()-1) ? INT_MAX : v[i+1]-v[i];
        cout<<min(temp1,temp2)<<" ";
        cout<<max(v[v.size()-1]-v[i], v[i]-v[0]);
        cout<<endl;
    }
}