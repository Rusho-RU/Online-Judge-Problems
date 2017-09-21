#include <stdio.h>

int main(){
    long long int a,b,n,i;
    while(scanf("%lld %lld",&a,&b)==2){
        long long int max=0,count,temp,limit;
        if(a>b){
            i=b;
            limit=a;
        }
        else{
            i=a;
            limit=b;
        }
        for(;i<=limit;i++){
            n=i;
            for(count=1;;count++){
                if(n==1)
                    break;
                else if(n%2!=0)
                    n=3*n+1;
                else
                    n=n/2;
            }
            printf("%lld %lld\n",i,count);
            if(count>max)
                max=count;
        }
        printf("%lld %lld %lld\n",a,b,max);
    }
    return 0;
}
