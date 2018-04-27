#include <bits/stdc++.h>
using namespace std;

int phi(int n){
    if(n==1) return 0;
    int result=1;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            n /= i;
            result *= i-1;
            while(n%i==0){
                n/=i;
                result *= i;
            }
        }
    }

    if(n>1)
        result *= n-1;
    return result;
}

int main(){
    int n;
    while(scanf("%d",&n),n){
        int ans = phi(n);
        printf("%d\n",ans);
    }
    return 0;
}


