#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int angle[20], n;

bool recur(int i, int now){
    if(i==n)
        return !now;

    return recur(i+1, ((now-angle[i])+360)%360) || recur(i+1, (now+angle[i])%360);
}

int main(){
    FasterIO;

    while(cin>>n){
        for(int i=0; i<n; i++)
            cin>>angle[i];

        if(recur(1, 360-angle[0]) || recur(1, angle[0]))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

