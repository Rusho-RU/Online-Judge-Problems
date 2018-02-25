#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        map<int, bool>mp;

        while(n--){
            int v;
            scanf("%d",&v);
            mp[v] = true;
        }

        printf("%d\n",mp.size());
    }

    return 0;
}

