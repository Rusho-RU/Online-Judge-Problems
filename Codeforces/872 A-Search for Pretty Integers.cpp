#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    while(scanf("%d %d",&n,&m)==2){
        int v, first = 10, second = 10;
        map<int, bool>mp;

        while(n--){
            scanf("%d",&v);
            first = min(first, v);
            mp[v] = true;
        }

        priority_queue<int>p;

        while(m--){
            scanf("%d",&v);
            second = min(second, v);
            if(mp.find(v) != mp.end())
                p.push(-v);
        }

        if(!p.empty())
            printf("%d\n",-p.top());
        else{
            if(first>second)
                swap(first,second);
            printf("%d\n",first*10 + second);
        }
    }

    return 0;
}
