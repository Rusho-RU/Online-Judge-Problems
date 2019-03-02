#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

map<pair<int, int>, bool>mp;

bool valid(pair<int, int> P){
    if(P.first>=0 && P.first<=1000 && P.second>=0 && P.second<=1000)
        return true;
    return false;
}

void go(pair<int, int> A, pair<int, int> B){
    if(A==B)
        return;

    pair<int, int> nxt;
}

int main(){
    FasterIO;

    pair<int, int> A, B, C;

    cin>>A.first>>A.second>>B.first>>B.second>>C.first>>C.second;


    mp[A] = true;
    mp[B] = true;
    mp[C] = true;

    go(A, B);
    go(A, C);
    go(B, C);

    return 0;
}

