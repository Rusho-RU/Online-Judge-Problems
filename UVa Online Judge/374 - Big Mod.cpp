#include <bits/stdc++.h>
using namespace std;

long long int BigMod(int a, int b, int MOD){
    long long int hold;
    if(b==0)
        return 1;
    if(b%2==0){
        hold=BigMod(a,b/2,MOD);
        return hold*hold%MOD;
    }

    else
        return (a*BigMod(a,b-1,MOD))%MOD;
}

int main(){
    int a,b,MOD;
    while(scanf("%d%d%d",&a,&b,&MOD)==3){
        printf("%lld\n",BigMod(a,b,MOD));
    }
    return 0;
}

