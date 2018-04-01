#include <bits/stdc++.h>
using namespace std;

int main(){
    int hh, mm;

    while(scanf("%d%d",&hh,&mm)==2){
        int h,c,d,n;

        scanf("%d%d%d%d",&h,&d,&c,&n);

        int woke = hh*60 + mm;
        int hunger = h + (1200 - woke)*d;

        hunger = max(hunger, h);

        double cost = c*min(ceil(h/n*1.0), 0.8*ceil(hunger/n*1.0));
        printf("%0.4lf\n",cost);
    }

    return 0;
}
