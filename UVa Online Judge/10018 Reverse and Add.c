#include <stdio.h>

int main(){
    int x,i;
    scanf("%d",&x);
    while(x--){
        int count=0;
        long long n;
        scanf("%lld",&n);
        long long a=n,temp=n,b;
        while(1){
            b=0;
            int digit;
            for(digit=1;;digit++){
                b=b*10+temp%10;
                temp=temp/10;
                if(temp==0)
                    break;
            }
            if(count!=0){
                if(check(a,b,digit)==0){
                    printf("%d %lld\n",count,a);
                    break;
                }
            }
            a=a+b;
            count++;
            temp=a;
        }
    }
    return 0;
}

int check(long long n, long long m, int digit){
    int limit=digit/2,i;
    long long h1,h2;
    for(i=0;i<limit;i++){
        h1=n%10;
        h2=m%10;
        if(h1!=h2)
            break;
        n=n/10;
        m=m/10;
    }
    if(i==limit)
        return 0;
    else
        return 1;
}
