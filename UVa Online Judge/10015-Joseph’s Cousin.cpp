#include <bits/stdc++.h>
using namespace std;

#define MAX (int)4e4

bool not_prime[MAX+1];
vector<int>prime;

void sieve(){
    for(int i=2;i<MAX;i++){
        if(!not_prime[i]){
            prime.push_back(i);
            for(int j=i*i;j<MAX;j+=i)
                not_prime[j]=true;
        }
    }
}

int main(){
    int n;
    sieve();

    while(scanf("%d",&n) && n){
        int ans=0, i=0, num=n;

        while(n!=1){
            ans=(ans+prime[i++]%num)%n;
            printf("%d\n",ans);
            n--;
        }

        printf("%d\n",ans);
    }

    return 0;
}
