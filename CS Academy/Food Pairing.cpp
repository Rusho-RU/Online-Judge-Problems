#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;

    while(scanf("%d",&n)==1){
        int ingredients[n];
        long long programmer = -1;

        for(int i=0; i<n; i++)
            scanf("%d",&ingredients[i]);

        scanf("%d",&m);

        int dishes[m][n];

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                scanf("%d",&dishes[i][j]);

        for(int i=0; i<m; i++){
            for(int j=i+1; j<m; j++){
                long long mx = 1000000000000;

                for(int k=0; k<n; k++)
                    if(dishes[i][k] || dishes[j][k])
                        mx = min(mx, (long long)ingredients[k]/(dishes[i][k] + dishes[j][k]));

                programmer = max(programmer, mx);
            }
        }

        printf("%d\n",programmer);
    }

    return 0;
}

