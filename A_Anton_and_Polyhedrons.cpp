#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    int ans=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ans+=mp[s];
    }
    cout<<ans;
}