#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        priority_queue<int>p;
        queue<int>q;
        stack<int>s;
        int type,num;
        bool pr=true,qu=true,st=true;

        for(int i=0;i<n;i++){
            scanf("%d %d",&type,&num);
            if(type==1){
                p.push(num), q.push(num), s.push(num);
            }

            else{
                if(p.empty()){
                    pr=qu=st=false;
                    continue;
                }

                if(p.top()!=num) pr=false;
                if(q.front()!=num) qu=false;
                if(s.top()!=num) st=false;
                p.pop(), q.pop(), s.pop();
            }
        }

        if(pr || qu || st){
            if(pr&&qu || pr&&st || st&&qu) puts("not sure");
            else if(pr) puts("priority queue");
            else if(qu) puts("queue");
            else puts("stack");
        }

        else puts("impossible");
    }

    return 0;
}
