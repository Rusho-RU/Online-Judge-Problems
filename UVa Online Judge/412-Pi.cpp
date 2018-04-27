#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n) && n){
        double pi = (n*(n-1))/2.0;
        int cnt = 0;
        int data[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            for(int j=i-1; j>=0; j--){
                if(__gcd(data[i], data[j])==1){
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;

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
