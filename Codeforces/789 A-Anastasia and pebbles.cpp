#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    while(scanf("%d %I64d",&n,&k)==2){
        long long temp,day=0,at_most=k*2,count=0,hold;
        for(int i=0;i<n;i++){
            scanf("%I64d",&temp);
            day+=temp/at_most;
            hold=temp%at_most;
            if(hold<=k && hold) count++;
            else if(hold>k) day++;
        }
        day+=count%2;
        count=count/2;
        printf("%I64d\n",day+count);
    }
    return 0;
}
