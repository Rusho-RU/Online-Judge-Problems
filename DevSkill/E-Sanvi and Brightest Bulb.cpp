#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int data[n], ans[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
        }

        int now = data[n-1], pos = n-1;
        ans[n-1] = 0;

        for(int i=n-2; i>=0; i--){
            if(data[i]<now)
                ans[i] = pos - i;
            else
                ans[i]=0, pos=i, now = data[i];
        }

        printf("%d",ans[0]);

        for(int i=1; i<n; i++)
            printf(" %d",ans[i]);
        printf("\n");
    }

    return 0;
}
