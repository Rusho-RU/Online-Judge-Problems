#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    while(scanf("%d%d",&n,&k)==2){
        int mx = -1, val;

        while(n--){
            scanf("%d",&val);
            mx = max(mx, val);
        }

        printf("%d\n",mx + k +1);
    }

    return 0;
}
