#include <bits/stdc++.h>
using namespace std;

long long c1,c2;
map<long long, long long>dp;
long long factor(long long n){
    long long i,j,ret;
    for(;n>=4;){
        if(n%2) break;
        if(n==2){
            c1=1;
            dp[n]=c2=2;
            return 2;
        }
        ret=factor(n/2);
        if(ret==2){
            c2+=c1;
            dp[n]=c2;
        }
        else{
            c1=c2;
            dp[n]=c2=c1*2;
        }
        return 2;
    }

    for(;n>=9;){
        if(n%3) break;
        if(n==3){
            c1=1;
            dp[n]=c2=2;
            return 3;
        }
        ret=factor(n/3);
        if(ret==3){
            c2+=c1;
            dp[n]=c2;
        }
        else{
            c1=c2;
            dp[n]=c2=c1*2;
        }
        return 3;
    }

    for(;n>=25;){
        if(n%5) break;
        if(n==5){
            c1=1;
            dp[n]=c2=2;
            return 5;
        }
        ret=factor(n/5);
        if(ret==5){
            c2+=c1;
            dp[n]=c2;
        }
        else{
            c1=c2;
            dp[n]=c2=c1*2;
        }
        return 5;
    }

    for(i=7,j=1;i*i<=n;j++){
        if(!(n%i)){
            while(!(n%i)){
                if(n==i){
                    c1=1;
                    dp[n]=c2=2;
                    return i;
                }
                ret=factor(n/i);
                if(ret==i){
                    dp[n]=c2+=c1;
                }
                else{
                    c1=c2;
                    dp[n]=c2=c1*2;
                }
                return i;
            }
        }
        if(j%2) i+=4;
        else i+=2;
    }
    if(n>1){
        c1=1;
        dp[n]=c2=2;
        return n;
    }
}

int main(){
    dp[1]=1;
    int t;
    scanf("%d",&t);
    while(t--){
        int i,j,l,u,limit,count,max=0,rem;
        scanf("%d %d",&l,&u);
        for(i=l;i<=u;i++){
            c1=0,c2=0;
            if(!dp[i]) factor(i);
            if(dp[i]>max){
                max=dp[i];
                rem=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,rem,max);
    }
    return 0;
}
