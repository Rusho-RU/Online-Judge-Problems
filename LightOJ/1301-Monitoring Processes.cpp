#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int start[n], stop[n];

        for(int i=0; i<n; i++)
            scanf("%d %d",&start[i], &stop[i]);

        sort(start, start+n);
        sort(stop, stop+n);

        int i=1, j=0, wrapper = 1, ans = 1;

        while(i<n && j<n){
            if(start[i] <= stop[j]){
                wrapper++;
                i++;
                ans = max(ans, wrapper);
            }

            else{
                wrapper--;
                j++;
            }
        }

        printf("Case %d: %d\n",++Case,ans);
    }

    return 0;
}
