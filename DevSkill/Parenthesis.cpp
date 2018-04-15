#include <bits/stdc++.h>
using namespace std;

#include<iostream>
using namespace std;

int binomialCoeff(int n, int k){
    int res = 1;

    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i){
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int catalan(int n)
{
    int c = binomialCoeff(2*n, n);
    return c/(n+1);
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int l,k;
        scanf("%d%d",&l,&k);
        int ans = 0;

        if(l%2==0 && k<=(l/2)){
            //if(k==(l/2))
              //  ans = 1;
            //else
                ans = catalan(l/2) - catalan(k);
        }

        printf("Case %d: %d\n",++Case,ans);
    }

    return 0;
}
