#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    while(scanf("%d%d",&n,&k)==2){
        int data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        sort(data, data+n);

        if(k==n){
            printf("%d\n",data[n-1]);
            continue;
        }

        if(k==0){
            if(data[0]==1)
                puts("-1");
            else
                printf("%d\n",data[0]-1);
            continue;
        }

        int ans = data[k-1];

        if(ans==data[k])
            puts("-1");
        else
            printf("%d\n",ans);
    }

    return 0;
}

