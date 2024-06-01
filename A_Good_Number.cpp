#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int i=0;i<n;i++){
        string s;
        map<int,int> mp;
        cin>>s;
        for(int i=0;i<s.size();i++){
            mp[s[i]-'0']++;
        }
        int flg=1;
        for(int i=0;i<=k;i++){
            if(mp[i]==0){
                flg=0;
                break;
            }
        }
        ans+=flg;
    }
    cout<<ans;
    return 0;
}