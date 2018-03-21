#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int data[n], mn = INT_MAX;

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            mn = min(mn, data[i]);
        }

        int total = 0;

        for(int i=0; i<n; i++){
            total += data[i] - mn;
        }

        printf("%d\n",total);
    }

    return 0;
}
