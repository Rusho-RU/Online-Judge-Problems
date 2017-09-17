#include <stdio.h>

int main(){
    double a,b,c,d,h,e,avr;
    int s;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    s=2+3+4+1;
    h=(a*2.0)+(b*3.0)+(c*4.0)+d;
    avr=h/s;
    if(avr>=7){
        printf("Media: %.1lf\n",avr);
        printf("Aluno aprovado.\n");
    }
    else if(avr<5){
        printf("Media: %.1lf\n",avr);
        printf("Aluno reprovado.\n");
    }
    else{
        scanf("%lf",&e);
        printf("Media: %.1lf\n",avr);
        printf("Aluno em exame.\nNota do exame: %.1lf\n",e);
        double f=(avr+e)/2.0;
        if(avr>=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",f);
    }
    return 0;
}
