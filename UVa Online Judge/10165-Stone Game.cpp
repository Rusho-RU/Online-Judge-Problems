#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    while(scanf("%lld",&n),n){
        long long nim=0,m;
        for(long long i=0;i<n;i++){
            scanf("%lld",&m);
            nim^=m;
        }
        if(nim) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
