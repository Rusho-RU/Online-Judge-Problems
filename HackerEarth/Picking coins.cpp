#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        long long n, k;

        cin>>n>>k;

        if(k==1){
            n&1 ? cout<<"Alice\n" : cout<<"Bob\n";
            continue;
        }

        int turn = 0;
        long long now = k, lim = LLONG_MAX/k;

        while(n>=now){
            n -= now;
            turn^=1;
            if(!turn)
                now<=lim ? now*=k : now = LLONG_MAX;
        }

        if(turn)
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
    }

    return 0;
}

