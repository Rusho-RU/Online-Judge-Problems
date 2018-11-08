#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount

int main(){
    FasterIO;

    int n,m;

    while(cin>>n>>m){
        int coordinate[n+m];
        int driver[n+m], call[m];

        for(int i=0; i<n+m; i++)
            cin>>coordinate[i];

        for(int i=0; i<n+m; i++)
            cin>>driver[i];

        int i = 0;

        while(i<n+m && !driver[i])
            i++;

        call[0] = i;
    }
}
