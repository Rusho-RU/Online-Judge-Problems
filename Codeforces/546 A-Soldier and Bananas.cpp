#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll k,w,n;
    while(scanf("%I64d %I64d %I64d",&k,&n,&w)==3){
        ll cost=(w*(w+1)*k)/2;
        cost-=n;
        printf("%I64d\n",cost*(cost>0));
    }
    return 0;
}
