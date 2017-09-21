#include <stdio.h>

int main(){
    int a[]={561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};
    while(1){
        int n,i;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0;i<15;i++)
            if(n==a[i]){
                printf("The number %d is a Carmichael number.\n",n);
                break;
            }
        if(i==15)
            printf("%d is normal.\n",n);
    }
    return 0;
}
