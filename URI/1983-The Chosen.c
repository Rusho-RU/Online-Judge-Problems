#include <stdio.h>

void main(){
    int n,i,flag=0,rem;
    scanf("%d",&n);
    float note[n],max=0.0;
    long int r[n];

    for(i=0;i<n;i++){
        scanf("%ld %f",&r[i],&note[i]);
        if(note[i]>=8)
            flag=1;
        if(note[i]>max){
            max=note[i];
            rem=i;
        }
    }

    if(flag==0)
        printf("Minimum note not reached\n");
    else
        printf("%ld\n",r[rem]);

}
