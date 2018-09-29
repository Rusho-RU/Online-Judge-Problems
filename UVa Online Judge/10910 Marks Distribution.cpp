#include <bits/stdc++.h>
using namespace std;

#define MAX 150

long long nCr[MAX][MAX];

void NCR(){
    for(int i=0; i<MAX; i++)
        nCr[i][i] = nCr[i][0] = 1;

    for(int n=1; n<MAX; n++){
        for(int r=1; r<MAX; r++){
            nCr[n][r] = nCr[n-1][r-1] + nCr[n-1][r];
        }
    }

    return;
}

int main(){
    NCR();

    int t;
    scanf("%d",&t);

    while(t--){
        int n,t,p;
        scanf("%d%d%d",&n,&t,&p);

        int N = t - p*n;

        printf("%lld\n",nCr[N+n-1][n-1]);
    }

    return 0;
}
