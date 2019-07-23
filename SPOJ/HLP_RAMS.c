#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        long long n;
        scanf("%lld", &n);

        int pop_count = 0;
        long long hold = n;

        while(hold){
            if(hold&1)
                pop_count++;
            hold>>=1;
        }

        long long odd = 1;
        for(int i=0; i<pop_count; i++)
            odd*=2;

        long long even = n-odd+1;

        printf("%lld %lld\n", even, odd);
    }

    return 0;
}
