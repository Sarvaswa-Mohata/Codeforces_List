#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p,q;
    set<int> st;
    cin>>p;
    while(p--){
        int ele;
        cin>>ele;
        st.insert(ele);
    }
    cin>>q;
    while(q--){
        int ele;
        cin>>ele;
        st.insert(ele);
    }
    if(st.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}