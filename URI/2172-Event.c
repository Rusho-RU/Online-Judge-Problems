#include <stdio.h>

int main(){
    while(1){
        int x;
        unsigned long long int m;
        scanf("%d %llu",&x,&m);
        if(x==0 && m==0)
            break;
        printf("%llu\n",x*m);
    }
    return 0;
}
