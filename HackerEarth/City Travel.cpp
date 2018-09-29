#include <bits/stdc++.h>
using namespace std;

#define day first
#define time second

long long need(long long s, long long x){
    long long ans = s/x;
    if(s%x)
        ans++;
    return ans;
}

int main(){
    long long s, x;
    int n;

    while(scanf("%lld %lld %d",&s,&x,&n)==3){
        pair<int, int>exc[n];

        for(int i=0; i<n; i++){
            scanf("%d%d",&exc[i].day, &exc[i].time);
        }

        sort(exc, exc+n);

        long long ans = need(s,x);

        for(int i=0; i<n; i++){
            if(ans < exc[i].day)
                break;

            s-=exc[i].time-x;
            ans = need(s,x);
        }



        printf("%lld\n",ans);
    }

    return 0;
}
