#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    vector<vector<int>> v;
    for(int i=0;i<2;i++){
        v.push_back({0,0});
    }
    int flg=0;
    for(int n=1;n<=9;n++){
        set<int> st;
        if(r1-n>0 && r1-n<10 && c1-n>0 && c1-n<10 && d1-n>0 && d1-n<10){
            v[0][0]=n;
            v[0][1]=r1-n;
            v[1][0]=c1-n;
            v[1][1]=d1-n;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    st.insert(v[i][j]);
                }
            }
        }
        if(v[1][0]+v[1][1]==r2 && v[0][1]+v[1][1]==c2 && v[0][1]+v[1][0]==d2 && st.size()==4){
            flg=1;
            break;
        }
    }
    if(flg){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<-1;
    }
    return 0;
}