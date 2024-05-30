#include<bits/stdc++.h>
using namespace std;

string temp = "IEHOVA#";
void dfs(int i, int j, char c,int n, int m, vector<string> v,int k){
    if(k==7){
        return;
    }
    if(j<m-1 && v[i][j+1]==c){
        cout<<"right ";
        dfs(i,j+1,temp[++k],n,m,v,k);
    }
    else if(j>0 && v[i][j-1]==c){
        cout<<"left ";
        dfs(i,j-1,temp[++k],n,m,v,k);
    }
    else if(i>0 && v[i-1][j]==c){
        cout<<"forth ";
        dfs(i-1,j,temp[++k],n,m,v,k);
    }
    else{
        return;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> v;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(int j=0;j<m;j++){
            if(v[n-1][j]=='@'){
                dfs(n-1,j,temp[0],n,m,v,0);
                break;
            }
        }
        cout<<endl;
    }
}