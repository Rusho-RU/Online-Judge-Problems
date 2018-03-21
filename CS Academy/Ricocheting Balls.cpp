#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
        }

        nth_element(data, data+n/2, data+n);

        long long ans = 0;

        for(int i=0; i<n; i++){
            ans+=abs(data[i] - data[n/2]);
        }

        printf("%lld\n",ans);
    }

    return 0;
}
