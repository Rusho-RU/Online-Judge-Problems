#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n==1) return true;
    int freq=0;
    for(int i=2;i*i<=n;i++){
        freq=0;
        while(n%i==0){
            n/=i;
            freq++;
        }
        if(freq%6) return false;
    }

    if(n!=1) return false;

    return true;
}

int main(){
    int n;

    while(scanf("%d",&n) && n){
        if(check(n)) printf("Special\n");
        else printf("Ordinary\n");
    }

    return 0;
}
