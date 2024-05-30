#include<bits/stdc++.h>
using namespace std;

bool dfs(int i, vector<vector<int>> v, vector<int>& vis, int c){
    if(vis[i]!=-1 && vis[i]!=c){
        return false;
    }
    if(vis[i]==c){
        return true;
    }
    vis[i]=c;
    for(int j=0;j<v[i].size();j++){
        if(!dfs(v[i][j], v, vis, !c)){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n+1);
    vector<int> vis(n+1,-1);
    int c=0;
    for(int i=0;i<m;i++){
        int e1,e2;
        cin>>e1>>e2;
        v[e1].push_back(e2);
        v[e2].push_back(e1);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(vis[i]!=-1){
            continue;
        }
        if(!dfs(i,v,vis,0)){
            cnt++;
        }
    }
    if(n%2!=cnt%2){
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}