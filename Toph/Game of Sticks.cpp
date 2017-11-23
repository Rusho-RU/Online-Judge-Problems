#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        double m = 1, sum = 0, val;

        for(int i=0; i<n; i++){
            scanf("%lf",&val);
            m *= val;
        }

        m = 1-m;

        printf("%lf\n",m);
    }

    return 0;
}
