#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ele;
            cin>>ele;
            if(ele=='C' || ele=='M' || ele =='Y'){
                flag=1;
            }
        }
    }
    if(flag){
        cout<<"#Color";
        return 0;
    }
    cout<<"#Black&White";
    return 0;
}