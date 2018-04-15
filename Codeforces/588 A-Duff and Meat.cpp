#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int a[n], val, data[n], mn = INT_MAX;

        for(int i=0; i<n; i++){
            scanf("%d %d",&a[i], &val);
            if(val < mn)
                mn = val;
            data[i] = mn;
        }

        int sum=0;

        for(int i=0; i<n; i++){
            sum += a[i] * data[i];
        }

        printf("%d\n",sum);
    }

    return 0;
}
