#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;

    while(scanf("%d%d%d%d",&n,&a,&b,&c)==4){
        vector<int>v[3];
        v[0].push_back(1);
        v[0].push_back(2);
        v[1].push_back(2);
        v[1].push_back(0);
        v[2].push_back(1);
        v[2].push_back(0);

        int cost[3][3] = {{10000, a, b},
                          {a, 10000, c},
                          {b, c, 10000}};

        int c, s = 0, hold, ans = 0;

        while(--n){
            c = 10000, hold =0;
            for(int i=0 ;i<3; i++){
                if(cost[s][i]<c)
                    c = cost[s][i], hold = i;
            }

            ans +=c;
            s = hold;
        }

        printf("%d\n",ans);
    }

    return 0;
}
