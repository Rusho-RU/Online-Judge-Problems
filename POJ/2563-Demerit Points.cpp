#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int getYear(int n){
    return n/10000;
}

int getDay(int n){
    return n%100;
}

int getMonth(int n){
    return (n%10000)/100;
}

void reduce(int *merit, int *demerit){
    if(*demerit > 2*(*merit))
        *demerit = *demerit - 2*(*merit), *merit = 0;
    else
        *merit -= *demerit/2 + *demerit%2, *demerit = 0;
}

void decide(int *interval, int *demerit){
    if(*demerit==0)
        *interval = 20000;
    else
        *interval = 10000;
}

void solve(int previous){
    int today, point, year, day, month, interval = 20000;
    int merit = 0, demerit = 0, lastZero = previous;

    while(scanf("%d %d",&today, &point)==2){
        while(today-previous >= interval){
            if(interval==20000){
                if(demerit) demerit-=2;
                else merit++;
            }

            else if(interval==10000 && demerit>0){
                demerit -= max((int)ceil(demerit/2.0), 2);
            }

            demerit = max(0, demerit);

            if(today-previous==interval)
                break;

            previous += interval;
            decide(&interval, &demerit);

            printf("%04d-%02d-%02d ",getYear(previous), getMonth(previous), getDay(previous));

            if(merit) printf("%d merit point(s).\n",merit);
            else if(demerit) printf("%d demerit point(s).\n",demerit);
            else printf("No merit or demerit points.\n");

            if(merit>=5) return;
        }

        demerit+=point;
        reduce(&merit, &demerit);
        previous = today;
        decide(&interval, &demerit);

        printf("%04d-%02d-%02d %d demerit point(s).\n",getYear(previous), getMonth(previous), getDay(previous), demerit);
    }

    while(merit<5){
        if(interval==20000)
            if(demerit) demerit-=2;
            else merit++;

        else if(interval==10000 && demerit>0){
            demerit -= max((int)ceil(demerit/2.0), 2);
        }

        demerit = max(0, demerit);
        previous += interval;
        decide(&interval, &demerit);

        printf("%04d-%02d-%02d ",getYear(previous), getMonth(previous), getDay(previous));

        if(merit) printf("%d merit point(s).\n",merit);
        else if(demerit) printf("%d demerit point(s).\n",demerit);
        else printf("No merit or demerit points.\n");
    }

    return;
}

int main(){
    int previous;

    while(scanf("%d",&previous)==1){
        int merit, demerit, interval;
        printf("%04d-%02d-%02d No merit or demerit points.\n",getYear(previous), getMonth(previous), getDay(previous));
        solve(previous);
    }

    return 0;
}
