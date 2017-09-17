#include <bits/stdc++.h>
using namespace std;

int main(){
    long double n,h;
    while(cin>>n>>h){
        long double s=sqrt(n),h_=h/s,a=1/s,b,area=(0.5*h)/n;
        cout<<setprecision(12)<<fixed;
        cout<<h_;
        n--;
        for(int i=1;i<n;i++){
            b=sqrt((a*a+1)*0.5);
            h_+=area/((a+b)*0.5);
            cout<<" "<<h_;
            a=b;
        }
        cout<<endl;
    }
    return 0;
}
