#include <bits/stdc++.h>
using namespace std;

#define MAXNUM 32800

struct entry{
    int freq;
    int parity;
    int product;
};

int n;
vector<entry>v;

void extendedSieve(){
    int i;

    for(i=2; i*i<MAXNUM; i++){
        if(v[i].product==1){
            for(int j=i, cnt=i; j<MAXNUM; j+=i){
                if(--cnt){
                    v[j].parity ^= 1;
                    v[j].product *= i;
                }

                else{
                    v[j].product = 0;
                    cnt = i;
                }
            }
        }
    }

    for(; i<MAXNUM; i++){
        if(v[i].product && v[i].product!=i){
            v[i].parity ^= 1;
        }
    }

    return;
}

int countCoPrimes(){
    int total = (n * (n-1))/2;

    for(int i=2; i<MAXNUM; i++){
        if(v[i].product){
            int cnt = 0;

            for(int j=i; j<MAXNUM; j+=i){
                cnt += v[j].freq;
            }

            total -= (v[i].parity*2 - 1) * ((cnt * (cnt-1))/2);
        }
        v[i].freq = 0;
    }

    return total;
}

void init(){
    for(int i=0; i<MAXNUM; i++)
        v.push_back({0, 0, 1});
}

int main(){
    init();
    extendedSieve();

    while(scanf("%d",&n) && n){
        double pi = (n*(n-1))/2.0;
        int val, zeroes = 0, ones = 0;

        for(int i=0; i<n; i++){
            scanf("%d",&val);
            if(val==1) ones++;
            if(val==0) zeroes++;
            v[val].freq++;
        }

        int cnt = countCoPrimes() - (n - zeroes - ones)*zeroes - (zeroes * (zeroes-1))/2;

        if(cnt==0){
            puts("No estimate for this data set.");
            continue;
        }

        pi= (pi*6)/cnt;
        pi = sqrt(pi);
        printf("%lf\n",pi);
    }

    return 0;
}

