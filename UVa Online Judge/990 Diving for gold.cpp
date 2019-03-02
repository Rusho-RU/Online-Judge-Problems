#include <bits/stdc++.h>
using namespace std;

#define depth first
#define quantity second
#define INF 0x3f3f3f3f

int t, w, mx;
vector<pair<int, int> >info, printable;
int dp[35][1010];

int recur(int id, int hoise){
    if(id==info.size())
        return 0;
    if(dp[id][hoise] != -1)
        return dp[id][hoise];

    int lagbe = hoise + 3*w*info[id].depth;

    int r1 = lagbe <= t ? recur(id+1, lagbe) + info[id].quantity : -1;
    int r2 = recur(id+1, hoise);

    return dp[id][hoise] = max(r1, r2);
}

void print(int id, int somoy, int gold){
    if(id==info.size() || gold<=0)
        return;

    int somoy_lagbe = somoy+3*w*info[id].depth;

    if(dp[id+1][somoy]==gold)
        print(id+1, somoy, gold);

    else{
        printable.push_back(info[id]);
        print(id+1, somoy_lagbe, gold-info[id].quantity);
    }
}

void reset(){
    memset(dp, -1, sizeof dp);
    info.clear();
    printable.clear();
}

int main(){
    int first = false;

    while(scanf("%d %d",&t, &w)==2){
        if(first) puts("");
        else first = true;

        reset();

        int treasure;
        scanf("%d",&treasure);

        while(treasure--){
            int d, q;
            scanf("%d%d",&d,&q);
            info.push_back(make_pair(d, q));
        }

        mx = recur(0, 0);

        printf("%d\n",mx);

        print(0, 0, mx);

        printf("%d\n",printable.size());

        for(int i=0; i<printable.size(); i++)
            printf("%d %d\n",printable[i].depth, printable[i].quantity);
    }

    return 0;
}
