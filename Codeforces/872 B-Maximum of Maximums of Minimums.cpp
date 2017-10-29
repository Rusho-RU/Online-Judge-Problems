#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    while(scanf("%d%d",&n,&k)==2){
        int v, maxVal = -10000000000, minVal = 10000000000;
        int data[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            maxVal = max(maxVal, data[i]);
            minVal = min(minVal, data[i]);
        }

        if(k==1)
            printf("%d\n",minVal);

        else if(k==2)
            printf("%d\n",max(data[0], data[n-1]));

        else
            printf("%d\n",maxVal);
    }

    return 0;
}
