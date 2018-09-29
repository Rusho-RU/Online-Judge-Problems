#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        map<long long, bool>mp;
        long long data[n];

        for(int i=0; i<n; i++){
            scanf("%I64d",&data[i]);
            mp[data[i]] = true;
        }

        queue<long long>q;

        for(int i=0; i<n; i++){
            q.push(data[i]);
            long long now = data[i];
            for(int j=1; j<n; j++){
                if(mp[now*2]){
                    now = now*2;
                    q.push(now);
                }

                else if(now%3==0 && mp[now/3]){
                    now/=3;
                    q.push(now);
                }

                else break;
            }

            if(q.size()==n)
                break;

            while(!q.empty()) q.pop();
        }

        while(!q.empty()){
            printf("%I64d ",q.front());
            q.pop();
        }

        puts("");
    }
    return 0;
}
