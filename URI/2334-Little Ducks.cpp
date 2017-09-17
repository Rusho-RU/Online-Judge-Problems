#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n;
    while(scanf("%llu",&n) && n!=-1){
        n-=1;
        if(n==-1) n=0;
        printf("%llu\n",n);
    }
    return 0;
}
