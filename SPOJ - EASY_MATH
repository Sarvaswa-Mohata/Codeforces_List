#include<bits/stdc++.h>
using namespace std;

int lcm(long long int a,long long int b){
    return a*b/__gcd(a,b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m,a,d;
        cin>>n>>m>>a>>d;
        int k=5;
        vector<long long int> s(k,0);
        for(int i=0;i<k;i++){
            s[i]=a+i*d;
        }
        int total = (1<<k);
        n--; //because n is inclusive
        long long int cpy_m = m, cpy_n = n;
        // cout<<"->"<<cpy_m<<endl;
        for(int i=1;i<total;i++){
            int nb=0;
            long long int val = 1;
            for(int j=0;j<k;j++){
                auto bit = (1<<j);
                if(i&bit){
                    nb++;
                    val = lcm(s[j],val);
                }
            }
            if(nb%2){
                m-=cpy_m/val;
                n-=cpy_n/val;
                // cout<<cpy_m<<endl;
            }
            else{
                m+=cpy_m/val;
                n+=cpy_n/val;
            }
        }
        cout<<m-n<<endl;
    }
    return 0;
}
