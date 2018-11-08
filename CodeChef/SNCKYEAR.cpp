#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int year;
        cin>>year;
        year%=100;

        if(year==10 || year==15 || year==16 || year==17 || year==19)
            cout<<"HOSTED\n";
        else
            cout<<"NOT HOSTED\n";
    }

    return 0;
}
