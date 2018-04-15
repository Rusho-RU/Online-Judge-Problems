#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;

    while(scanf("%d%d",&n,&k)==2){
        int data[n+1], total = 0;
        int prefix[n+1], sum[n+1];

        memset(prefix, 0, sizeof prefix);
        memset(sum, 0, sizeof sum);

        for(int i=1; i<=n; i++){
            scanf("%d",&data[i]);
            sum[i] = sum[i-1] + data[i];
        }

        int val;

        for(int i=1; i<=n; i++){
            scanf("%d",&val);
            if(val){
                prefix[i] = prefix[i-1] + data[i];
                total+=data[i];
            }

            else{
                prefix[i] = prefix[i-1];
            }
        }

        int ans = 0;

        for(int i=1; i+k-1<=n; i++){
            ans = max(ans, (sum[i+k-1]-prefix[i+k-1]) - (sum[i-1]-prefix[i-1]));
        }

        printf("%d\n",total+ans);
    }

    return 0;
}
