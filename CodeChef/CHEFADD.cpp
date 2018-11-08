#include <bits/stdc++.h>
using namespace std;

#define popcount __builtin_popcount

int pow2[31], dp[31][31][31][2], cnt_c, c;

void calculate(){
    pow2[0] = 1;

    for(int i=1; i<31; i++){
        pow2[i] = pow2[i-1]*2;
    }
}

int recur(int pos, int cnt_a, int cnt_b, int carry){
    if(cnt_a<0 || cnt_b<0)
        return 0;

    if(pos==cnt_c)
        return (!cnt_a && !cnt_b && !carry) ? 1:0;

    if(dp[pos][cnt_a][cnt_b][carry]!=-1)
        return dp[pos][cnt_a][cnt_b][carry];

    int total = 0;

    if(carry){
        if(c&pow2[pos]){
            total+=recur(pos+1, cnt_a, cnt_b, 0);
            total+=recur(pos+1, cnt_a-1, cnt_b-1, 1);
        }
        else{
            total+=recur(pos+1, cnt_a-1, cnt_b, 1);
            total+=recur(pos+1, cnt_a, cnt_b-1, 1);
        }
    }

    else{
        if(c&pow2[pos]){
            total+=recur(pos+1, cnt_a-1, cnt_b, 0);
            total+=recur(pos+1, cnt_a, cnt_b-1, 0);
        }
        else{
            total+=recur(pos+1, cnt_a, cnt_b, 0);
            total+=recur(pos+1, cnt_a-1, cnt_b-1, 1);
        }
    }

    return dp[pos][cnt_a][cnt_b][carry] = total;
}

int main(){
    calculate();

    int t;
    scanf("%d",&t);

    while(t--){
        memset(dp, -1, sizeof dp);

        int a,b;
        scanf("%d %d %d",&a, &b, &c);

        cnt_c = 0;
        int temp = c;

        while(temp)
            temp/=2, cnt_c++;

        int ans = recur(0, popcount(a), popcount(b), 0);

        printf("%d\n",ans);
    }

    return 0;
}
