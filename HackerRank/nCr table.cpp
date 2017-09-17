#include <bits/stdc++.h>
using namespace std;

#define MOD (int)1e9

int nCr[1001][1001];

void calculate(){
    for(int n=0;n<1001;n++) nCr[n][0]=nCr[n][n]=1;

    for(int n=1;n<1001;n++)
        for(int r=1;r<1001;r++)
            nCr[n][r]=((nCr[n-1][r-1])%MOD + (nCr[n-1][r]%MOD)) %MOD;
    return;
}

int main(){
    calculate();
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        printf("%d",nCr[n][0]);
        for(int r=1;r<=n;r++)
            printf(" %d",nCr[n][r]);
        printf("\n");
    }
    return 0;
}
