#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int r[n],i,flag=1,rem;
    scanf("%d",&r[0]);
    for(i=1;i<n;i++){
        scanf("%d",&r[i]);
        if(flag==1)
            if(r[i]<r[i-1]){
                flag=0;
                rem=i+1;
            }
    }

    if(flag==1)
        printf("0\n");
    else
        printf("%d\n",rem);
}
