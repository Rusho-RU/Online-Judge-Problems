#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int k, ans=INT_MAX;
        scanf("%d",&k);

        int data[100];

        for(int i=0; i<100; i++){
            scanf("%d",&data[i]);
            if(data[i] >= k)
                ans = 1;
        }

        if(ans==1){
            puts("1");
            continue;
        }

        for(int i=99; i>=0; i--){
            int j, sum = data[i];
            for(j=i-1; j>=0; j--){
                sum+=data[j];
                if(sum>=k)
                    break;
            }

            if(j>=0){
                ans = min(ans, i-j+1);
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}
