#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount

int main(){
    FasterIO;

    long long n;

    while(cin>>n){
        long long x, y;
        cin>>x>>y;

        long long white = x+y-2;
        long long black = 2*n - x - y;

        if(white<=black)
            cout<<"White";
        else
            cout<<"Black";

        cout<<endl;
    }

    return 0;
}
