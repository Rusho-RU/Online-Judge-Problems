#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,k,i,limit,j;
        long long int count=0,sum=0;
        scanf("%d%d%d",&a,&b,&k);
        for(i=a;i<=b;i++)
            if(i%k==0)
                break;
        for(;i<=b;i+=k){
            count+=2,sum+=1+i,limit=sqrt(i);
            for(j=2;j<=limit;j++)
                if(i%j==0){
                    count+=2;
                    sum+=j+i/j;
                }
            if((j-1)*(j-1)==i){
                sum-=j-1;
                count--;
            }
        }
        printf("%lld %lld\n",count,sum);
    }
    return 0;
}
