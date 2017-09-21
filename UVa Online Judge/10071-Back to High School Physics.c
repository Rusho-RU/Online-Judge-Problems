#include <stdio.h>
void main(){
    long long int s,v,t;
    for(;;){
        if(scanf("%lld %lld",&v,&t)==EOF)
            exit(0);
        else{
            s=2*v*t;
            printf("%ld\n",s);
        }
    }
}
