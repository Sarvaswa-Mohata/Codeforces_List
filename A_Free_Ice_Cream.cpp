#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x;
    cin>>n>>x;
    long long int cnt=0, ans=x;
    for(int i=0;i<=n;i++){
        string s;
        getline(cin,s);
        if(i==0) continue;
        auto temp = s.substr(2);
        long long int num = stoi(temp);
        if(s[0]=='+'){
            ans+=num;
        }
        else{
            if(ans>=num){
                ans-=num;
            }
            else{
                cnt++;
            }
        }
    }
    cout<<ans<<" "<<cnt<<endl;
}