#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> v;
    int maxa=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v[s]++;
        maxa = max(maxa,v[s]);
    }
    for(auto it:v){
        if(it.second==maxa){
            cout<<it.first;
            return 0;
        }
    }
    return 0;
}