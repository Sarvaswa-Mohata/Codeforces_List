#include<bits/stdc++.h>
using namespace std;

void dfs(int i, vector<vector<int>>& v, vector<int>& vis, stack<int>& st){
    if(vis[i]){
        return;
    }
    vis[i]=1;
    for(auto it:v[i]){
        dfs(it, v, vis, st);
    }
    st.push(i);
    return;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> v(n);
    for(int i=0;i<k;i++){
        int q;
        cin>>q;
        for(int j=0;j<q;j++){
            int ele;
            cin>>ele;
            v[i].push_back(ele-1);
        }
    }
    vector<int> vis(n,0);
    stack<int> st;
    for(int i=0;i<n;i++){
        if(vis[i]){
            continue;
        }
        dfs(i,v,vis,st);
    }
    while(!st.empty()){
        cout<<st.top()+1<<" ";
        st.pop();
    }
    return 0;
}