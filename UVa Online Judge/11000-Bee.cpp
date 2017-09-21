#include <bits/stdc++.h>
using namespace std;

#define limit (long long)1e18

int main(){
    long long male[100], total[100];
    male[0]=0,male[1]=total[0]=1,total[1]=2;

    for(int i=2;;i++){
        male[i]=male[i-1]+male[i-2]+1;
        total[i]=total[i-1]+total[i-2]+1;
        if(male[i]>limit || total[i]>limit) break;
    }

    int n;
    while(scanf("%d",&n) && n!=-1){
        printf("%lld %lld\n",male[n],total[n]);
    }

    return 0;
}
