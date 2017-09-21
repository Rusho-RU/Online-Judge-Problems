#include <stdio.h>

int main(){
    int z;
    for(z=1;;z++){
        int n,p,i,j;
        scanf("%d %d",&n,&p);
        if(n==0 && p==0)
            break;
        if(z!=1)
            printf("\n");
        char req[n][82],prop_name[p][82];
        double price[p],compliance[p],max=0.0;
        int met,rem;
        for(i=0;i<n;i++)
            scanf(" %[^\n]s",req[i]);
        for(i=0;i<p;i++){
            scanf(" %[^\n]s",prop_name[i]);
            scanf("%lf %d",&price[i],&met);
            compliance[i]=(double)met/n;
            if(compliance[i]>max){
                max=compliance[i];
                rem=i;
            }
            char met_req[met][80];
            for(j=0;j<met;j++)
                scanf(" %[^\n]s",met_req[i]);
        }
        for(i=0;i<p;i++){
            if(compliance[i]==max)
                if(price[i]<price[rem])
                    rem=i;
        }

        printf("RFP #%d\n%s\n",z,prop_name[rem]);
    }
    return 0;
}
