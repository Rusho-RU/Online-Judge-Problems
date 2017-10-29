#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int hold=0, cnt=0;

        do{
            hold = (hold*10 + m) % n;
            cnt++;
        }while(hold);

        printf("Case %d: %d\n",++Case,cnt);
    }

    return 0;
}
