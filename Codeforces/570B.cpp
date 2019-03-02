#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        if(n==1){
            cout<<1<<endl;
            continue;
        }

        if(m<=n/2)
            m++;
        else
            m--;
        cout<<m<<endl;
    }

    return 0;
}
