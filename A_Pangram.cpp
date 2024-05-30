#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++){
        v[tolower(s[i])-'a']++;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}