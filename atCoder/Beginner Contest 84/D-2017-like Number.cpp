#include <bits/stdc++.h>
using namespace std;

#define MAX 100000+100

bool notPrime[MAX];
int Count[MAX];

void findPrime(){
    notPrime[0] = notPrime[1] = true;
    for(int i=2; i*i<MAX; i++){
        if(!notPrime[i]){
            for(int j=i*i; j<MAX; j+=i)
                notPrime[j] = true;
        }
    }
}

void solve(){
    int cnt = 0;
    for(int i=0; i<MAX; i++){
        if(!notPrime[i] && !notPrime[(i+1)/2])
            ++cnt;
        Count[i] = cnt;
    }
}

int main(){
    findPrime();
    solve();

    int q;
    scanf("%d",&q);

    while(q--){
        int a,b;
        scanf("%d %d",&a,&b);

        printf("%d\n",Count[b] - Count[a-1]);
    }

    return 0;
}

