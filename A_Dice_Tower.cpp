#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    set<int> st;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        st.insert(a);
        st.insert(b);
        st.insert(7-a);
        st.insert(7-b);
        if(st.size()>4){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}