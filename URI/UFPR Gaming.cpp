#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, id;

    while(cin>>n>>id){
        int cnt=0;

        for(int i=0; i<n; i++){
            int gid, g;
            cin>>gid>>g;

            cnt+=(gid==id && !g);
        }

        cout<<cnt<<endl;
    }

    return 0;
}

