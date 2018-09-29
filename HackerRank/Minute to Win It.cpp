#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    while(scanf("%d%d",&n,&k)==2){
        long long data, diff[n];

        for(long long i=0; i<n; i++){
            scanf("%lld",&data);
            diff[i] = data - k*i;
        }

        sort(diff, diff+n);
        int mx_cnt = INT_MIN;

        for(int i=0; i<n; i++){
            int j;

            for(j=i+1; j<n; j++)
                if(diff[j]!=diff[i])
                    break;

            mx_cnt = max(mx_cnt, j-i);
            i=j-1;
        }

        printf("%d\n",n-mx_cnt);
    }

    return 0;
}
