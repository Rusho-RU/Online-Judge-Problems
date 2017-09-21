#include <bits/stdc++.h>
using namespace std;

int month_l[13]={0,31,60,91,121,152,182,213,244,274,305,335,366};
int month_a[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};

struct date{
    int day,month,year;
};

date after(date a, long long n){
    date b;
    long long days=a.day,h;

    if(a.year%400==0 || a.year%100!=0 && a.year%4==0)
        h=month_l[a.month-1];
    else
        h=month_a[a.month-1];

    days+=h+a.year*365;
    int leap=((a.year-1)/4)-((a.year-1)/100)+((a.year-1)/400),i;
    days+=leap+n;
    b.year=0;
    int prev=0,hold1,hold2,flag=0;
    for(;;){
        b.year+=days/366;
        days=days%366;
        hold1=(b.year/4)-(b.year/100)+(b.year/400);
        hold2=(prev/4)-(prev/100)+(prev/400);
        leap=hold1-hold2;
        days+=b.year-prev-leap;
        if(days<366){
            if(b.year%400==0 || b.year%100!=0 && b.year%4==0){
                    days++;
                    flag=1;
            }
                break;
        }
        prev=b.year;
    }
    if(flag==1){
        if(days==0)
            b.day=1,b.month=1;
        else{
            for(i=1;i<13;i++)
                if(days<=month_l[i])
                    break;
            b.month=i;
            b.day=days-month_l[i-1];
        }
    }

    else{
        if(days==365)
            b.day=31,b.month=12;

        else if(days==0)
            b.day=1,b.month=1;
        else{
            for(i=1;i<13;i++)
                if(days<=month_a[i])
                    break;
            b.month=i;
            b.day=days-month_a[i-1];
        }
    }
    return b;
}


int first[11]={121,220,321,421,522,622,723,822,924,1024,1123};
int sec[11]={219,320,420,521,621,722,821,923,1023,1122,1222};
string s[12]={"aquarius","pisces","aries","taurus","gemini","cancer","leo","virgo","libra","scorpio","sagittarius","capricorn"};

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        long long n;
        scanf("%lld",&n);
        date a;
        a.year=n%10000,n/=10000,a.day=n%100,n/=100,a.month=n;
        a=after(a,280);
        int check=a.month*100+a.day,i;
        for(i=0;i<11;i++)
            if(check>=first[i] && check<=sec[i])
                break;
        check=i;
        printf("%d %02d/%02d/%04d ",z+1,a.month,a.day,a.year);
        cout<<s[check]<<endl;
    }
    return 0;
}

