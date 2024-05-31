#include<bits/stdc++.h>
#define pi 3.14159265359
using namespace std;
int main(){
    int d,h,v,e;
    cin>>d>>h>>v>>e;
    double ans;
    if((double)v<=(double)pi*d*d*e/4){
        cout<<"NO"<<endl;
    }
    else{
        ans = (double)pi*d*d*h/4;
        ans/=((double)v-(double)(pi*d*d*e)/4);
        cout<<"YES"<<endl;
        printf("%.12f",ans);
    }
    return 0;
}