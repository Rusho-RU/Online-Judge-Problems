#include <stdio.h>

int main(){
    for(;;){
        int month,n;
        double down,loan;
        scanf("%d %lf %lf %d",&month,&down,&loan,&n);
        if(month<0)
            break;
        int m[n],i,j;
        double d[n];
        for(i=0;i<n;i++)
            scanf("%d %lf",&m[i],&d[i]);
        int flag=0;
        double worth=down+loan,done=loan/month,owe=loan+done,h;
        int count=0;
        for(i=0;;){
            if(count==m[i]){
                h=d[i];
                i++;
            }
            worth=worth*(1-h);
            owe=owe-done;
            if(owe<worth){
                break;
            }
            count++;
        }
        printf("%d month",count);
        if(count!=1)
            printf("s");
        printf("\n");
    }
    return 0;
}
