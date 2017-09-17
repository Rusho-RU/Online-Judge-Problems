#include <stdio.h>

int main(){
    int t,pa,pb,i,j;
    double g1,g2;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%lf%lf",&pa,&pb,&g1,&g2);
        double h1=(g1/100.0)+1.0,h2=(g2/100.0)+1.0;
        for(j=1;;j++){
            if(j>100){
                printf("Mais de 1 seculo.\n",j);
                break;
            }
            pa*=h1;
            pb*=h2;
            if(pa>pb){
                printf("%d anos.\n",j);
                break;
            }
        }
    }
    return 0;
}
