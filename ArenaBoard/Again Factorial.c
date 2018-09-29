#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, i;
        scanf("%d",&n);

        double digits = 0;

        for(i=1; i<=n; i++){
            digits += log10(i);
        }

        int ans = floor(digits) + 1;

        printf("%d\n", ans);
    }

    return 0;
}
