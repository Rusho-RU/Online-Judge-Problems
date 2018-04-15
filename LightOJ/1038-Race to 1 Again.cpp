#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

double ex[MAX];

double recur(int n){
    if(n==1)
        return 0;
    if(ex[n]!=0)
        return ex[n];

    int divisor=2;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            ex[n]+=recur(i);
            divisor++;

            if(i*i!=n){
                ex[n]+=recur(n/i);
                divisor++;
            }
        }
    }

    ex[n]+=divisor;
    ex[n]/=(divisor-1);

    return ex[n];

}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        recur(n);
        printf("Case %d: %0.8lf\n",++Case,ex[n]);
    }

    return 0;
}
