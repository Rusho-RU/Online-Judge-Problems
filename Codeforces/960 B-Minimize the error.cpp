#include <bits/stdc++.h>
using namespace std;

long long diff(long long x, long long y){
    long long ans = x-y;
    if(ans<0)
        return -ans;
    return ans;
}

int main(){
    int n, k1, k2;

    while(scanf("%d%d%d",&n,&k1,&k2)==3){
        long long data1[n], data2[n], table[n], total = 0;
        int k=k1+k2;

        priority_queue<long long>pq;

        for(int i=0; i<n; i++){
            scanf("%I64d",&data1[i]);
        }

        for(int i=0; i<n; i++){
            scanf("%I64d",&data2[i]);
            pq.push(diff(data1[i], data2[i]));
        }

        while(k--){
            long long top = pq.top();
            pq.pop();

            if(!top)
                pq.push(1);
            else
                pq.push(top-1);
        }

        long long ans = 0;

        while(!pq.empty()){
            long long top = pq.top();
            pq.pop();

            ans+=top*top;
        }

        printf("%I64d\n",ans);
    }

    return 0;
}
