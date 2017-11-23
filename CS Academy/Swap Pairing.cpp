#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        long long val, cnt=0;
        deque<long long>deq;

        for(int i=0; i<n; i++){
            scanf("%lld",&val);
            deq.push_back(val);

            while(deq.size()>1 && deq.front() == deq.back()){
                deq.pop_front();
                deq.pop_back();
                cnt+=deq.size();
            }

        }

        printf("%lld\n",cnt);
    }

    return 0;
}
