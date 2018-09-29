#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    while(scanf("%d %d",&n,&m)==2){
        long long sum=0;

        for(int i=0; i<n; i++){
            int val;
            scanf("%d",&val);
            sum+=val;
        }

        m = n+m;

        sum = (m*(m+1))/2 - sum;

        printf("%lld\n",sum);
    }

    return 0;
}
