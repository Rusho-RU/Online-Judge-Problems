#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) && n){
        deque<int>d;
        for(int i=1;i<n;i++)
            d.push_back(i+1);

        printf("Discarded cards: 1");

        while(d.size()!=2){
            d.push_back(d.front());
            d.pop_front();
            printf(", %d",d.front());
            d.pop_front();
        }

        printf(", %d\n",d.back());

        printf("Remaining card: %d\n",d.front());
    }
    return 0;
}
