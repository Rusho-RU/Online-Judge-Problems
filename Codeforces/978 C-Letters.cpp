#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;

    while(scanf("%d%d",&n,&m)==2){
        long long f[n];

        for(int i=0; i<n; i++)
            scanf("%I64d",&f[i]);

        long long prefix[n];
        prefix[0] = f[0];

        for(int i=1; i<n; i++)
            prefix[i] = prefix[i-1] + f[i];

        for(int i=0; i<m; i++){
            long long val;
            scanf("%I64d",&val);
            int id = lower_bound(prefix, prefix+n, val) - prefix;

            if(id==0){
                printf("%d %I64d\n",1, val);
                continue;
            }

            printf("%d %I64d\n",id+1, val-prefix[id-1]);
        }
    }

    return 0;
}

