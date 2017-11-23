#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001
#define MOD 1000000007

int main(){
    long long increase = 1;
    vector<long long>data;
    data.push_back(1);

    for(int i=1; i<MAX; i++){
        data.push_back(((increase % MOD * 4) % MOD + data[i-1]) % MOD);
        increase = (increase % MOD * 3) % MOD;
    }

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        printf("%lld\n",data[n]);
    }

    return 0;
}
