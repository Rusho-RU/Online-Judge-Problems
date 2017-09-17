#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    while(scanf("%I64d%I64d%I64d",&n,&m,&a)==3){
        long long x=n/a+(n%a!=0),y=m/a+(m%a!=0);
        printf("%I64d\n",x*y);
    }
    return 0;
}
