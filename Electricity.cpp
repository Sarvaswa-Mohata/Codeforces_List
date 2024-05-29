#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        vector<vector<int>> v;
        while(t--){
            int d,m,y,c;
            cin>>d>>m>>y>>c;
            v.push_back({d,m,y,c});
        }
        int flag=0;
        int ans1=0, ans2=0;
        for(int i=0;i<v.size()-1;i++){
            //new year :
            if(v[i+1][2]!=v[i][2]){
                if(v[i+1][2]-v[i][2]==1){
                    if(v[i][1]==12 && v[i+1][1]==1 && v[i][0]==31 && v[i+1][0]==1){
                        flag=1;
                    }
                }
                else{
                    continue;
                }
            }

            //new month :
            else if(v[i+1][1]!=v[i][1]){
                int temp = v[i][0];
                if(v[i][1]==2){
                    int leap=0;
                    if(v[i][2]%400==0){
                        leap=1;
                    }
                    else if(v[i][2]%100==0){
                        leap=0;
                    }
                    else if(v[i][2]%4==0){
                        leap=1;
                    }
                    if(leap){
                        //month is of 29 days
                        if(v[i][0]==29 && v[i+1][0]==1){
                            flag=1;
                        }
                        else{
                            continue;
                        }
                    }
                    else{
                        //month is of 28 days 
                        if(v[i][0]==28 && v[i+1][0]==1){
                            flag=1;
                        }
                        else{
                            continue;
                        }
                    }
                }
                //month is of 31 days 
                else if(((v[i][1]%2 && v[i][1]<=7)||(v[i][1]%2==0 && v[i][1]>7))&&(temp==31)){
                    if((v[i+1][1] == v[i][1]+1)&&(v[i+1][0]==1)){
                        flag=1;
                    }
                }
                //month is of 30 days
                else if(((v[i][1]%2==0 && v[i][1]<=7)||(v[i][1]%2 && v[i][1]>7))&&(temp==30)){
                    if((v[i+1][1] == v[i][1]+1)&&(v[i+1][0]==1)){
                        flag=1;
                    }
                }
                else{
                    continue;
                }
            }

            //new day :
            else if(v[i+1][0]-v[i][0]==1){
                flag=1;
            }
            else{
                continue;
            }

            if(flag){
                int c = v[i+1][3]-v[i][3];
                ans1+=c;
                ans2++;
            }
        }
        cout<<ans2<<" "<<ans1<<endl;
    }
}