#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        auto temp=s[i]-'0';
        if(9-temp>=0 && 9-temp<temp){
            if(9-temp!=0 || i!=0)
            temp = 9-temp;
        }
        s[i] = temp+'0';
    }
    cout<<s;
    return 0;
}