#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int x, y, z, g, p, b;

    while(cin>>x>>y>>z>>g>>p>>b){
        bool possible = true;

        if(g<x){
            cout<<"NO\n";
            continue;
        }

        g-=x;

        if(g+p<y){
            cout<<"NO\n";
            continue;
        }

        int total = g+p+b;
        total-=y;

        if(total<z){
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";
    }

    return 0;
}
