#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int upper[n];
        scanf("%d",&upper[0]);

        for(int i=1; i<n; i++){
            int val;
            scanf("%d",&val);
            upper[i] = upper[i-1] + val;
        }

        int lower[n];

        for(int i=0; i<n; i++)
            scanf("%d",&lower[i]);

        for(int i=n-2; i>=0; i--)
            lower[i]+=lower[i+1];

        int mx = INT_MIN;

        for(int i=0; i<n; i++)
            mx = max(mx, upper[i] + lower[i]);

        printf("%d\n",mx);
    }

    return 0;
}
