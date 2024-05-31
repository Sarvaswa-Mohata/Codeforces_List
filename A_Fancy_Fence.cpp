#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        int k,ans=0;
        if(ele==180){
            cout<<"NO"<<endl;
        }
        else if(360%(180-ele)==0 && 360/(180-ele)>=3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }   
    return 0;
}