#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        double p;
        scanf("%lf",&p);

        double a = p/(2+sqrt(2.0));

        double ans = 0.5*a*a;

        printf("%0.02lf\n",ans);
    }

    return 0;
}
