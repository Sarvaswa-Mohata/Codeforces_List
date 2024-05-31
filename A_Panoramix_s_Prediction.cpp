#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> vis(51,1);
    for(int i=2;i<=50;i++){
        for(int j=2;j<=50;j++){
            if(vis[j]==1 && j%i==0){
                vis[j]=i;
            }
        }
    }
    // for(int i=0;i<=50;i++){
    //     cout<<vis[i]<<" ";
    // }
    for(int i=n+1;i<m;i++){
        if(vis[i]==i){
            cout<<"NO";
            return 0;
        }
    }
    if(vis[m]==m){
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}