#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int q;
        char c;

        deque<char>deq;

        while(n--){
            scanf("%d %c",&q,&c);
            if(q)
                deq.push_back(c);
            else
                deq.push_front(c);
        }

        while(!deq.empty()){
            printf("%c",deq.front());
            deq.pop_front();
        }
        puts("");
    }

    return 0;
}
