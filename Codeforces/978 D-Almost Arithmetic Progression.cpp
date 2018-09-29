#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        long long data[n], diff[n];
        long long sum = 0;

        for(int i=0; i<n; i++)
            scanf("%I64d",&data[i]);

        for(int i=1; i<n; i++){
            diff[i] = abs(data[i] - data[i-1]);
            sum+=diff[i];
        }

        long long median = sum/(n-1);
        bool found = true;
        int cnt1 = 0, cnt2 = 0;

        for(int i=1; i<n; i++){
            if(sum + median-diff[i] == 0)
                cnt1+=2;
            sum+=median-diff[i];
            if(sum>3){
                found = false;
                cnt1 = INT_MAX;
                break;
            }
        }

        if(found)
            cnt1+=sum;

        median++;
        found = true;
        sum=0;

        for(int i=1; i<n; i++){
            if(sum + median-diff[i] == 0)
                cnt2+=2;
            sum+=median-diff[i];
            if(sum>3){
                found = false;
                cnt2 = INT_MAX;
                break;
            }
        }

        if(found)
            cnt2+=sum;

        if(min(cnt1, cnt2)==INT_MAX)
            puts("-1");
        else
            printf("%d\n",min(cnt1, cnt2));
    }

    return 0;
}
