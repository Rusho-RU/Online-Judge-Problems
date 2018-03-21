#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
        }

        int ans = INT_MAX, cnt=0;

        for(int i=0; i<n; i++){
            if(data[i])
                cnt+=3 - data[i];
        }

        ans = min(ans, cnt);
        cnt = 0;

        for(int i=0; i<n; i++){
            if(data[i]==2)
                cnt+=2;
            else
                cnt+=1-data[i];
        }

        ans = min(ans, cnt);
        cnt = 0;

        for(int i=0; i<n; i++){
            cnt+=2-data[i];
        }

        ans = min(ans, cnt);
        cnt = 0;

        printf("%d\n",ans);
    }

    return 0;
}
