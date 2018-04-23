#include <bits/stdc++.h>
using namespace std;

int findIndex(int d, int k){
    int index = 1;

    while((index*(index+1)*d) < 2*k)
        index++;

    return index;
}

long long nth(int coefficient[], int index, int n){
    long long power = 1, ans=0;

    for(int i=0; i<=n; i++){
        ans += coefficient[i] * power;
        power*=index;
    }

    return ans;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, d, k;
        scanf("%d",&n);
        int coefficient[n+1];

        for(int i=0; i<=n; i++)
            scanf("%d",&coefficient[i]);

        scanf("%d %d",&d, &k);
        int id = findIndex(d, k);

        long long ans = nth(coefficient, id, n);
        printf("%lld\n",ans);
    }

    return 0;
}

