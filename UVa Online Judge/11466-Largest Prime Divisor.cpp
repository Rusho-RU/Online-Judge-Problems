#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    while(scanf("%lld",&n),n){
        long long count=0,max=0;
        if(n<0) n=-n;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                count++;
                if(i>max)
                    max=i;
                while(n%i==0)
                    n/=i;
            }
        }
        if(n>1){
            count++;
            max=n;
        }
        if(count==1 || n==1) printf("-1\n");
        else printf("%lld\n",max);
    }
    return 0;
}

