#include <stdio.h>

void main(){
    int n,i;
    for(;;){
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            if(x>2 && x<10001)
                if(x%2==0)
                    printf("%d\n",2*x-2);
                else
                    printf("%d\n",2*x-1);
        }
    }
}
