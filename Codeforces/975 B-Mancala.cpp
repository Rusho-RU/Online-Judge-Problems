#include <bits/stdc++.h>
using namespace std;

int main(){
    long long stones[14];

    for(int i=0; i<14; i++)
        scanf("%I64d",&stones[i]);

    long long ans = 0;

    for(int i=0; i<14; i++){
        if(stones[i]==0) continue;
        long long sum = 0;
        long long cnt[14] = {};

        long long increase = stones[i]/14;
        long long extra = stones[i]%14;

        for(int j=0; j<14; j++){
            if(i==j)
                cnt[j] = increase;
            else
                cnt[j] = stones[j] + increase;
        }

        for(int j=i+1, k=0; k<extra; j++, k++){
            cnt[j%14]++;
        }

        for(int j=0; j<14; j++)
            if(cnt[j]%2==0) sum+=cnt[j];

        ans = max(ans, sum);
    }

    printf("%I64d\n",ans);

    return 0;
}
