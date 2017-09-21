#include <stdio.h>

void main(){
    int j=1;
    for(;;j++){
        int n,i;
        scanf("%d",&n);
        if(n==0)
            break;
        int a[n],count=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==0)
                count++;
        }
        int x=n-count;
        printf("Case %d: %d\n",j,x-count);
    }
    exit(0);
}
