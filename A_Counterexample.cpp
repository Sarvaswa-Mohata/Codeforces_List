#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;
    if(m-n<2){
        cout<<-1;
        return 0;
    }
    if(n%2==0){
        cout<<n<<" "<<n+1<<" "<<n+2;
    }
    else{
        if(m-n<=2){
            cout<<-1;
            return 0;
        }
        cout<<n+1<<" "<<n+2<<" "<<n+3;
    }
    return 0;
}