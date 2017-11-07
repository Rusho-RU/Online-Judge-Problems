#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    int found[100001] = {};

    int val, ans = 1;

    for(int i=0; i<n; i++){
        scanf("%d",&val);
        if(!found[val])
            found[val] = i;
        else
            ans = max(ans, i-found[val]+1);
    }

    printf("%d\n",ans);

    return 0;
}
