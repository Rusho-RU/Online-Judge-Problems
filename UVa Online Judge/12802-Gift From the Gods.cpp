#include <bits/stdc++.h>
using namespace std;

long long reverse_int(long long n){
    long long h,r=0;
    while(n){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        printf("%d\n",2*n);
        int limit=sqrt(n)+1,i;
        for(i=2;i<limit;i++)
            if(n%i==0)
                break;
        if(i==limit){
            if(reverse_int(n)==n)
                break;
        }
    }
    return 0;
}


