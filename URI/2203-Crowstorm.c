#include <stdio.h>
#include <math.h>

int main(){
    int xf,yf,xi,yi,vi,r1,r2;
    while(scanf("%d%d%d%d%d%d%d",&xf,&yf,&xi,&yi,&vi,&r1,&r2)==7){
        double d1=sqrt(pow((abs(xf-xi)),2)+pow((abs(yf-yi)),2));
        double r=r1+r2;
        double d2=vi*1.5,d=d1+d2;
        if(r>d)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
