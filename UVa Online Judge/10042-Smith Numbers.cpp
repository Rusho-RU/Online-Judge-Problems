#include <bits/stdc++.h>
using namespace std;

long long digit(long long n){
    long long i,j,count=0,hold,count1;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            hold=i;
            count1=0;
            for(;hold;){
                count1+=hold%10;
                hold/=10;
            }
            printf("%lld ",count1);
            while(n%i==0){
                n/=i;
                count+=count1;
            }
        }
    }
    if(n>1){
        for(count1=0;n;){
            count1+=n%10;
            n/=10;
        }
        printf("%lld ",count1);
        count+=count1;
    }
    printf("\n");
    return count;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long i,n,hold,j,count1;
        scanf("%lld",&n);
        for(i=n+1;;i++){
            hold=i;
            for(j=0,count1=0;hold;j++){
                count1+=hold%10;
                hold/=10;
            }
            hold=digit(i);
            if(hold==count1){
                printf("%lld %lld\n",count1,i);
                break;
            }
        }
    }
    return 0;
}
