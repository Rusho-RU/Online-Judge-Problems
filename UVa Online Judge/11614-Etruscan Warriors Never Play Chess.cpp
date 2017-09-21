#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long hold=8*n+1;
        double s=sqrt(hold);
        hold=(long long)s;
        long long pos=(hold-1)/2;
        printf("%lld\n",pos);
    }
    return 0;
}

