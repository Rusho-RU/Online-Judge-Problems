#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    while(scanf("%I64d%I64d",&n,&m)==2){
        long long rem=n;
        n-=m;
        if(n<=0) printf("%I64d\n",rem);

        else{
            double hold=(sqrt(8*n+1)-1)/2;
            long long day=ceil(hold);
            if((((day+1)*day)/2)<n) day++;
            day+=m;
            printf("%I64d\n",day);
        }
    }
    return 0;
}
