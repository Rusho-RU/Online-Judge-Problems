#include <bits/stdc++.h>
using namespace std;

int Josephus(int n, int k){
    if(n==1) return 0;
    return (Josephus(n-1,k)+k)%n;
}

int main(){
    int n,m,k;
    while(scanf("%d%d%d",&n,&m,&k) && n+m+k){
        int j=Josephus(n+m,k)+1;
        printf("%d\n",j);
    }
}
