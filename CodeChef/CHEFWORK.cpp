#include <bits/stdc++.h>
using namespace std;

#define MAX 100000000

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int auth=MAX, trans=MAX, auth_trans=MAX;
        int type, data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        for(int i=0; i<n; i++){
            scanf("%d",&type);

            if(type==1)
                trans = min(trans, data[i]);

            else if(type==2)
                auth = min(auth, data[i]);

            else
                auth_trans = min(auth_trans, data[i]);
        }

        int ans = min(auth_trans, auth+trans);

        printf("%d\n",ans);
    }

    return 0;
}
