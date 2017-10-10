#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n, m;
        scanf("%d%d",&n,&m);
        bool visited[n][m];
        int atSeat[m];
        memset(visited, false, sizeof visited);
        memset(atSeat, -1, sizeof atSeat);

        deque<int>coders;

        for(int i=1;i<n;i++)
            coders.push_back(i);

        atSeat[0] = 0;
        visited[0][0] = true;
        int seat=1, cnt=1, check=n*m, total=0, time=5;

        while(total!=check){
            time+=5;
            seat = cnt++ % m;
            int now = atSeat[seat];

            if(!coders.empty() && !visited[coders.front()][seat]){
                atSeat[seat] = coders.front();
                visited[coders.front()][seat] = true;
                coders.pop_front();
            }

            else
                atSeat[seat] = -1;

            if(now!=-1){
                coders.push_back(now);
                total++;
            }
        }

        printf("Case %d: %d\n",++Case,time);
    }

    return 0;
}
