#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int v, o1=0, o2=0;

        for(int i=0; i<n; i++){
            cin>>v;
            if(v&1)
                o1++;
        }

        for(int i=0; i<m; i++){
            cin>>v;
            if(v&1)
                o2++;
        }

        int z1 = n-o1, z2=m-o2;

        int tot = min(z1, o2) + min(z2, o1);

        cout<<tot<<endl;
    }

    return 0;
}

