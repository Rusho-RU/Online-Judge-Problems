#include <bits/stdc++.h>
using namespace std;

int month_l[13]={0,31,60,91,121,152,182,213,244,274,305,335,366};
int month_a[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};

int main(){
    int p,d,m,y,i;
    while(scanf("%d%d%d%d",&p,&d,&m,&y),p,d,m,y){
        long long days=d,h;
        if(y%400==0 || y%100!=0 && y%4==0)
            h=month_l[m-1];
        else
            h=month_a[m-1];
        days+=h+y*365;
        int leap=((y-1)/4)-((y-1)/100)+((y-1)/400);
        days+=leap+p;
        int year=0,day,month,prev=0,hold1,hold2,flag=0;
        for(;;){
            year+=days/366;
            days=days%366;
            hold1=(year/4)-(year/100)+(year/400);
            hold2=(prev/4)-(prev/100)+(prev/400);
            leap=hold1-hold2;
            days+=year-prev-leap;
            if(days<366){
                if(year%400==0 || year%100!=0 && year%4==0){
                    days++;
                    flag=1;
                }
                break;
            }
            prev=year;
        }
        if(flag==1){
            if(days==0)
                day=1,month=1;
            else{
                for(i=1;i<13;i++)
                    if(days<=month_l[i])
                        break;
                month=i;
                day=days-month_l[i-1];
            }
        }

        else{
            if(days==365)
                day=31,month=12;

            else if(days==0)
                day=1,month=1;
            else{
                for(i=1;i<13;i++)
                    if(days<=month_a[i])
                        break;
                month=i;
                day=days-month_a[i-1];
            }
        }
        printf("%d %d %d\n",day,month,year);
    }
    return 0;
}

