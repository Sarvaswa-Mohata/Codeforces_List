#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.size()>10){
            string temp;
            stringstream obj;
            obj<<(s.size()-2);
            obj>>temp;
            cout<<s[0]<<temp<<s[s.size()-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}