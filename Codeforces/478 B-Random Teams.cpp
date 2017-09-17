#include <bits/stdc++.h>
using namespace std;

int main(){
    long long mem,team;
    while(scanf("%I64d%I64d",&mem,&team)==2){
        long long num=mem/team,hold=mem%team,min=0,max;
        if(hold)
            min=hold*(((num)*(num+1))/2);

        min+=(team-hold)*((((num-1)*num))/2);
        team--;
        num=mem-team;
        max=((num-1)*(num))/2;
        printf("%I64d %I64d\n",min,max);
    }
    return 0;
}
