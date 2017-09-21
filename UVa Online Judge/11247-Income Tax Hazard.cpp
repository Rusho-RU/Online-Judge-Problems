#include <bits/stdc++.h>
using namespace std;

int main(){
    long long m,x;
    while(scanf("%lld%lld",&m,&x)){
        if(!m && !x)
            break;
        if(x>=100 || !x || !m)
            printf("Not found\n");
        else{
            m--;
            double hold=(double)(m*100)/(100-x);
            if((long long)hold==hold)
                hold--;
            long long ans=hold;
            if(ans<m+1)
                printf("Not found\n");
            else
                printf("%lld\n",ans);
        }
    }
    return 0;
}
