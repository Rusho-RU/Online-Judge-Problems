#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[8],o[8],i;

    for(i=1,a[0]=9;;i++){
        a[i]=a[i-1]*18;
        if(a[i]>=4294967295) break;
    }

    for(i=1,o[0]=18;;i++){
        o[i]=o[i-1]*18;
        if(o[i]>=4294967295) break;
    }

    long long n;
    while(scanf("%lld",&n)==1){
        int i;
        for(i=0;i<8;i++)
            if(n>a[i] && n<=o[i])
                break;

        if(i==8) printf("Stan wins.\n");
        else printf("Ollie wins.\n");
    }
    return 0;
}
