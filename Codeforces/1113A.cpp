#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n, v;

    while(cin>>n>>v){
        int tk = 0, parbe = 0;
        for(int i = 1; i < n; i++){
            if(parbe<n-i){
                tk += min(v-parbe, n-i)*i;
                parbe+=min(v-parbe, n-i);
            }
            parbe--;
        }

        cout<<tk<<"\n";
    }

    return 0;
}

