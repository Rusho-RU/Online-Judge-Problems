#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int check(int n, int m){
    if(n==m)
        return 0;

    if(n>m)
        return -1;

    int ret1 = check(2*n, m);
    int ret2 = check(3*n, m);

    if(!(~ret1) && !(~ret2))
        return -1;

    if(!(~ret1))
        return ++ret2;

    if(!(~ret2))
        return ++ret1;

    return min(ret1, ret2)+1;
}

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        cout<<check(n, m)<<endl;
    }

    return 0;
}

