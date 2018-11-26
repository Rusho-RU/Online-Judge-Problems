#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int cnt  =0;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if((i*i+j*j)%m==0){
                    cout<<i<<" "<<j<<endl;
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}

