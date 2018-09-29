#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;

    while(scanf("%d %d %d",&n,&a,&b)==3){
        int data[n];
        double sum = 0;

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            sum+=data[i];
        }

        int s0 = data[0];
        double required = (1.0 * s0 * a)/b;

        if(sum<=required){
            puts("0");
            continue;
        }

        sort(data+1, data+n);

        for(int i=n-1; i>0; i--){
            sum-=data[i];
            if(sum <= required){
                printf("%d\n",n-i);
                break;
            }
        }
    }

    return 0;
}
