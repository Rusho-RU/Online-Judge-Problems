#include <bits/stdc++.h>
using namespace std;

#define shiftBy 1000

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, val;
        scanf("%d",&n);
        long long freq[2050] = {};
        long long ans = 0;

        vector<long long>data;

        for(int i=0; i<n; i++){
            scanf("%d",&val);
            val+=shiftBy;
            if(freq[val]==0)
                data.push_back(val);
            freq[val]++;
        }

        for(int i=0; i<data.size(); i++){
            int a = data[i];
            ans+=(freq[a]*(freq[a]-1))/2;
            for(int j=i+1; j<data.size(); j++){
                int b = data[j];
                if((a+b)%2) continue;

                if(freq[(a+b)/2]){
                    ans+=freq[a]*freq[b];
                }
            }
        }

        printf("%lld\n",ans);
    }

    return 0;
}
