#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) && n){
        int t;
        bool done=false;
        while(!done){
            stack<int>train2;
            queue<int>train1;
            for(int i=1;i<=n;i++){
                scanf("%d",&t);

                if(!t){
                    done=true;
                    break;
                }

                train1.push(t);
                train2.push(i);

                while(!train1.empty() && !train2.empty() && train1.front()==train2.top())
                    train1.pop(), train2.pop();

            }
            if(done) continue;

            if(!train2.empty()) printf("No\n");
            else printf("Yes\n");
        }

        printf("\n");
    }
    return 0;
}
