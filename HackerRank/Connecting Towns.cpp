#include <bits/stdc++.h>
using namespace std;

#define MOD 1234567

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,value;
        scanf("%lld",&n);
        int root=1;
        for(int i=1;i<n;i++){
            scanf("%lld",&value);
            root=((root%MOD)*(value%MOD))%MOD;
        }
        printf("%lld\n",root);
    }
    return 0;
}
