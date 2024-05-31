#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag=0;
    string ans;
    for(int i=0;i<s.size();){
        if(s[i]=='W' && s.substr(i,3)=="WUB"){
            i+=3;
            flag=0;
        }
        else{
            if(ans.size()!=0 && flag==0){
                ans+=' ';
            }
            ans+=s[i];
            i++;
            flag=1;
        }
    }
    cout<<ans;
    return 0;
}