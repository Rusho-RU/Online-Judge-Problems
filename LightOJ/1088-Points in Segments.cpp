#include <bits/stdc++.h>
using namespace std;

int data[100050];

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n, q;
        scanf("%d%d",&n,&q);

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        printf("Case %d:\n",++Case);

        while(q--){
            int a,b;
            scanf("%d%d",&a,&b);

            int left = upper_bound(data, data+n, a-1) - data;
            int right = lower_bound(data, data+n, b+1) - data;

            if(left==n){
                puts("0");
                continue;
            }

            printf("%d\n",right-left);
        }
    }

    return 0;
}
