#include <bits/stdc++.h>
using namespace std;

int main(){
    long long lucas[87];
    lucas[0] = 2;
    lucas[1] = 1;

    for(int i=2; i<87; i++){
        lucas[i] = lucas[i-1] + lucas[i-2];
    }

    int n;
    while(scanf("%d",&n)==1){
        printf("%lld\n",lucas[n]);
    }

    return 0;
}
