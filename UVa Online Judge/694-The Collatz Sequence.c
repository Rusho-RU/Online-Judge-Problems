#include <stdio.h>

void main(void){
    long long int a,l,i,hold;
    int n;
    for(n=1;;n++){
        scanf("%lld%lld",&a,&l);
        hold=a;
        if(a<0 && l<0)
            exit(0);
        else{
            for(i=1;a!=1;i++){
                if(a%2==0)
                    a=a/2;
                else{
                    a=3*a+1;
                    if(a>l)
                        break;
                }
            }
            printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",n,hold,l,i);
        }
    }
}
