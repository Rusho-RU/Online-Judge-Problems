#include <bits/stdc++.h>
using namespace std;

#define MAX 70
#define prime_max 21
typedef unsigned long long ULL;

int prime[] = {0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};
ULL nCr[MAX][MAX],n;

const ULL largest = (ULL)1<<63;

map<ULL,ULL>ans;

void recur(int ind, int limit, int num_of_factor, ULL C , ULL num){
    if(num>largest || C>largest)
        return;

    if(ind > 0 && (ans.find(C)==ans.end() || ans[C]>num)){
        ans[C] = num;
    }

    if(ind==prime_max)
        return;

    ULL mul = 1;

    for(int i=1; i<=limit; i++){
        mul*=prime[ind];

        if(num >= largest/mul || C*nCr[num_of_factor+i][i] >= largest)
            return;
        recur(ind + 1, i, num_of_factor+i, C*nCr[num_of_factor+i][i], num*mul);
    }

    return;
}

int main(){
    nCr[0][0] = 1;

    for(int i=1; i<MAX; i++){
        nCr[i][0] = 1;
        for(int j=1; j<=i; j++){
            nCr[i][j] = nCr[i-1][j-1] + nCr[i-1][j];
        }
    }

    recur(1,63,0,1,1);

    while(scanf("%llu",&n)==1){
        if(n==1){
            puts("1 2");
            continue;
        }

        printf("%llu %llu\n",n,ans[n]);
    }

    return 0;
}
