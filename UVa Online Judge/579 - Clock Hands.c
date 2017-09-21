#include <stdio.h>
#include <math.h>

int main(){
    while(1){
        int h,m,flag;
        scanf("%d:%d",&h,&m);
        if(h==0 && m==0)
            break;
        if(h==12)
            h=0;
        double hold=h*30.0+0.5*m,dif=hold-m*6;
        if(dif<0.0)
            dif=-dif;
        if(dif>180.0)
            dif=360.0-dif;
        printf("%.3lf\n",dif);
    }
    return 0;
}
