#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n;

    while(scanf("%d%d",&k,&n) == 2){
        int data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        int sum = -1, sum1,sum2;

        for(int i=0; i<n; i+=k){
            sum1 = sum2 = 0;
            for(int j=0; j<k; j++){
                if(i+k-1<n)
                    sum1+=data[i+j];
                if(n-i-k-2 >= 0)
                    sum2+=data[n-i-1-j];
            }

            sum = max(sum, max(sum1, sum2));
        }

        printf("%d\n",sum);
    }

    return 0;
}
