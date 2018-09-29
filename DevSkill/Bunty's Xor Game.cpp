#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        long long data[n];
        for(int i=0; i<n; i++)
            scanf("%lld",&data[i]);

        long long ans = 0;
        bool turn = true;

        while(1){
            long long mx = -1;
            int r1, r2;

            for(int i=0; i<n; i++){
                if(data[i]==-1)
                    continue;
                int j;
                for(j=i+1; j<n; j++){
                    if(data[j]==-1)
                        continue;
                    if(data[i]^data[j] > mx){
                        mx = data[i]^data[j];
                        r1 = i, r2 = j;
                    }
                }
            }

            if(mx==-1){
                break;
            }

            data[r1] = data[r2] = -1;

            if(turn){
                ans+=mx;
                turn = false;
            }
            else
                turn = true;
        }

        printf("%lld\n",ans);
    }

    return 0;
}
