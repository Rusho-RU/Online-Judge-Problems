#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n, val, now=1, cnt=0;
        scanf("%d",&n);

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            if(val==now)
                now++, cnt++;
        }

        printf("Case %d: %d\n",++Case,n-cnt);
    }
    return 0;
}

