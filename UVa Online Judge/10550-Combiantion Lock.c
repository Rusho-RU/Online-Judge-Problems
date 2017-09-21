#include <stdio.h>

int main(){
    long pos,first,sec,third;
    while(scanf("%ld %ld %ld %ld",&pos,&first,&sec,&third) && (pos!=0 || first!=0 || sec!=0 || third!=0)){
        long sum=1080,round;

        if(first>pos)
            round=360-(first-pos)*9;
        else
            round=(pos-first)*9;

        sum+=round;

        if(first>sec)
            round=360-(first-sec)*9;
        else
            round=(sec-first)*9;

        sum+=round;

        if(third>sec)
            round=360-(third-sec)*9;
        else
            round=(sec-third)*9;

        sum+=round;

        printf("%ld\n",sum);
    }
    return 0;
}
