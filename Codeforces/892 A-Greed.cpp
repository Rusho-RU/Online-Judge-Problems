#include <bits/stdc++.h>
using namespace std;

bool cmp(long long a, long long b){
    return a>b;
}

int main(){
    int n;

    while(scanf("%d",&n)==1){
        long long data[n], cap[n];
        long long sum=0;
        bool possible = false;

        for(int i=0; i<n; i++){
            scanf("%I64d",&data[i]);
            sum+=data[i];
        }

        for(int i=0; i<n; i++){
            scanf("%I64d",&cap[i]);
        }

        sort(cap, cap+n, cmp);

        if(cap[0] + cap[1] >= sum)
            possible = true;

        if(possible)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
