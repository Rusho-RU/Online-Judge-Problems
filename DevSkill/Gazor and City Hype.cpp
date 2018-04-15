#include <bits/stdc++.h>
using namespace std;

int rem(int n, long long p){
    if(p==0)
        return 1;

    if(n==5)
        return 0;

    if(n==1 || n==6)
        return 1;

    if(n==2 || n==7){
        int data[] = {1,2,4,3};
        return data[p%4];
    }

    if(n==3 || n==8){
        int data[] = {1,3,4,2};
        return data[p%4];
    }

    if(n==4 || n==9){
        int data[] = {1,4};
        return data[p%2];
    }
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, sum=0;
        long long p;
        scanf("%d %lld",&n,&p);

        for(int i=1; i<=n; i++){
            sum = (sum%5 + rem(i,p)%5) % 5;
        }

        printf("%d\n",sum);
    }

    return 0;
}
