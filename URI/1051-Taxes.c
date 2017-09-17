#include <stdio.h>

int main(){
    double s,t;
    scanf("%lf",&s);
    if(s>=0 && s<=2000)
        printf("Isento\n");
    else if(s>2000 && s<=3000){
        s=s-2000.00;
        t=(s*8.0)/100.0;
        printf("R$ %.2lf\n",t);
    }

    else if(s>3000 && s<=4500){
        s=s-3000;
        t=((s*18.0)/100.0)+80;
        printf("R$ %.2lf\n",t);
    }

    else if(s>4500){
        s=s-4500;
        t=((s*28.0)/100.0)+350;
        printf("R$ %.2lf\n",t);
    }
}
