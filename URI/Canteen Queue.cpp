#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        priority_queue<int>q;
        int n,i;
        scanf("%d",&n);
        int ara[n],Count=0;
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
            q.push(ara[i]);
        }
        for(i=0;i<n;i++){
            if(q.top()==ara[i])
                Count++;
            q.pop();
        }
        printf("%d\n",Count);
    }
    return 0;
}
