#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    char s = v[0][0];
    char t = v[1][0];
    if(s==t){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(j==i || j==n-1-i){
                if(v[i][j]!=s){
                    cout<<"NO";
                    return 0;
                }
            }
            else if(v[i][j]!=t){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}