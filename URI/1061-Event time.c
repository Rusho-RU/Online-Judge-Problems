#include <stdio.h>

int main(){
    int d1,h1,m1,s1,d2,h2,m2,s2;
    scanf("Dia %d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf(" Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    long int sec1=d1*86400+h1*3600+m1*60+s1,sec2=d2*86400+h2*3600+m2*60+s2,sec;
    if(sec1>sec2)
        sec=sec1-sec2;
    else
        sec=sec2-sec1;
    printf("%d dia(s)\n",sec/86400);
    sec=sec%86400;
    printf("%d hora(s)\n",sec/3600);
    sec=sec%3600;
    printf("%d minuto(s)\n",sec/60);
    sec=sec%60;
    printf("%d segundo(s)\n",sec);
    return 0;
}
