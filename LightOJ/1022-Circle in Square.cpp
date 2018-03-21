#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main(){
    int t, Case=0;

    scanf("%d",&t);

    while(t--){
        double r;
        scanf("%lf",&r);

        printf("Case %d: %0.2lf\n",++Case,r*r*(4-pi));
    }

    return 0;
}
