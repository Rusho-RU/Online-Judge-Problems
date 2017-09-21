#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
bool won[MAX+1];
long long fib[MAX+1];

void fibonacci(){
    fib[0]=0,fib[1]=1,fib[1]=true;
    for(int i=2;;i++){
        fib[i]=fib[i-1]+fib[i-2];
        won[fib[i]]=true;
        if(fib[i]>MAX) break;
    }
}


int main(){
    fibonacci();
    long long n;

    while(scanf("%lld",&n),n){
        if(won[n]) printf("Roberto\n");
        else printf("Alicia\n");
    }
    return 0;
}
