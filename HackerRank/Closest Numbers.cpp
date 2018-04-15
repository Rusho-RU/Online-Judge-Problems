#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
        }

        sort(data, data+n);
        int mn = INT_MAX;

        for(int i=1; i<n; i++){
            int diff = abs(data[i] - data[i-1]);
            mn = min(mn, diff);
        }

        for(int i=1; i<n; i++){
            int diff = abs(data[i] - data[i-1]);
            if(diff == mn)
                printf("%d %d ",data[i-1], data[i]);
        }

        puts("");
    }

    return 0;
}
