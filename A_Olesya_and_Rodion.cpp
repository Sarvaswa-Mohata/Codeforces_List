#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    if(k<=9){
        for(int i=0;i<n;i++){
            cout<<k;
        }
    }
    else if(n==1 && k==10){
        cout<<-1;
        return 0;
    }
    else{
        cout<<1;
        for(int i=0;i<n-1;i++){
            cout<<0;
        }
    }
    return 0;
}