#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int val, now = 0;
        map<int, bool>mp;
        int room=1;
        mp[0] = true;

        for(int i=0; i<n; i++){
            scanf("%d",&val);

            if(mp[val])
                mp[val] = false, mp[i+1] = true;

            else
                ++room, mp[i+1] = true;
        }

        printf("%d\n",room);
    }

    return 0;
}
