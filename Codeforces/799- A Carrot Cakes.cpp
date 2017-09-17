#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,k,d;
    while(scanf("%d%d%d%d",&n,&t,&k,&d)==4){
        int sum=0,time1=0,time2=0;
        while(sum<n){
            sum+=k,time1+=t;
        }

        sum=0;
        while(sum<n){
            time2+=t;
            sum+=k;
            if(time2>=d){
                sum+=k;
                time2+=d-time2+t;
            }
        }

        if(time2<time1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
