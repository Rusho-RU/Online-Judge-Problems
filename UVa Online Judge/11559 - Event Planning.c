#include <stdio.h>

int main(){
    int participate,hotel,week;
    long int budget;
    while(scanf("%d %ld %d %d",&participate,&budget,&hotel,&week)!=EOF){
        int price[hotel],i,j,bed[week];
        long long int p,min=budget+1;
        for(i=0;i<hotel;i++){
            scanf("%d",&price[i]);
            for(j=0;j<week;j++){
                scanf("%d",&bed[j]);
                if(bed[j]>=participate){
                    p=participate*price[i];
                    if(p<min)
                        min=p;
                }
            }
        }
        if(min==budget+1)
            printf("stay home\n");
        else
            printf("%ld\n",min);
    }
    return 0;
}
