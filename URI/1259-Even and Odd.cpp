#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        priority_queue<int>e,o;
        int val;

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            if(val%2) o.push(val);
            else e.push(-val);
        }

        while(!e.empty()){
            printf("%d\n",-e.top());
            e.pop();
        }

        while(!o.empty()){
            printf("%d\n",o.top());
            o.pop();
        }
    }
    return 0;
}
