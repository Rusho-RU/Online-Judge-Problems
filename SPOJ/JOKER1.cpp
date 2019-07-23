#include <cstdio>
#include <algorithm>

const int MOD = 1000000007;

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int i;
        long long num[n], ans = 1;

        for(i=0; i<n; i++)
            scanf("%lld", &num[i]);

        std::sort(num, num+n);

        for(i=0; i<n; i++){
            ans*=(num[i]-i);
            ans%=MOD;
        }

        printf("%lld\n", ans);
    }

    printf("KILL BATMAN");

    return 0;
}
