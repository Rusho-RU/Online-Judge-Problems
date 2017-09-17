#include <stdio.h>

int main(){
    while(1){
        int n,a,m=0,j=0;
        scanf("%d",&n);
        if(n==0)
            break;
        while(n--){
            scanf("%d",&a);
            if(a==0)
                m++;
            else
                j++;
        }
        printf("Mary won %d times and John won %d times\n",m,j);
    }
    return 0;
}
