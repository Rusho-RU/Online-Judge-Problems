#include <bits/stdc++.h>
using namespace std;

#define MAX 1500000

bool notPrime[MAX];
map<int,int>lucky;
int cnt;

void sieve(){
    for(int i=2; i*i<MAX; i++){
        if(!notPrime[i]){
            lucky[cnt++] = i;
            for(int j=i*i; j<MAX; j+=i)
                notPrime[j] = true;
        }
    }

    return;
}

void more(){
    for(int i = lucky[cnt-1]+1; i<MAX; i++)
        if(!notPrime[i])
            lucky[cnt++] = i;
    return;
}

int main(){
    sieve();
    more();

    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",++Case,lucky[n-1]);
    }

    return 0;
}
