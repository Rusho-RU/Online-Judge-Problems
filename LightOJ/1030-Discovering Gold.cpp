#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int grid[n];

        for(int i=0; i<n; i++)
            scanf("%d",&grid[i]);

        double expected[n];

        expected[n-1] = (double)grid[n-1];

        for(int i=n-2; i>=0; i--){
            int j;
            double sum = 0;
            for(j=1; j<=6 && i+j<n; j++)
                sum+=expected[i+j];

            expected[i] = sum/(j-1)+grid[i];
        }

        printf("Case %d: %0.8lf\n",++Case,expected[0]);
    }

    return 0;
}
