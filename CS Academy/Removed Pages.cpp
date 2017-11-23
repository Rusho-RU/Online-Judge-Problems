#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)!=EOF){
        set<int>s;

        int val;

        for(int i=0; i<n; i++){
            scanf("%d",&val);

            if((val-1)%2==0)
                s.insert((val-1) / 2);
            else
                s.insert((val-2) / 2);
        }

        printf("%d\n",s.size());
    }

    return 0;
}
