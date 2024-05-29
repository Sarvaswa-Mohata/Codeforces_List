#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            int tmp = (int)(s[i]-'0');
            v.push_back(tmp);
        }
    }
    sort(v.begin(),v.end());
    string ans;
    for(int i=0;i<v.size();i++){
        ans+=(to_string(v[i]));
        if(i!=v.size()-1){
            ans+='+';
        }
    }
    cout<<ans;
}