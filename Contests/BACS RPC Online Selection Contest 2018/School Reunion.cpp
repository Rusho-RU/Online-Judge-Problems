#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n, p;
        scanf("%d %d",&n,&p);
        int entry[n], exit[n];

        for(int i=0; i<n; i++)
            scanf("%d %d",&entry[i], &exit[i]);

        sort(entry, entry+n);
        sort(exit, exit+n);

        int now=1, i=1, j=0, mn = INT_MAX, mx = INT_MIN;

        while(i<n && j<n){
            if(entry[i] <= exit[j]){
                now++, i++;
                mx = max(mx, now);
                if(j && now==p-1)
                    mn = min(mn, entry[i-1] - exit[j-1]);
            }
            else
                now--, j++;
        }

        if(mx>=p)
            mn = 0;

        else if(mn == INT_MAX){
            for(int i=p-1; i<n; i++){
                mn = min(mn, entry[i] - exit[i-p+1]);
            }
        }

        printf("Case %d: %d\n",++Case, mn);
    }

    return 0;
}

