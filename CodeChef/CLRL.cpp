#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, point;
        scanf("%d%d",&n,&point);
        int left = -1, right = 1000000001, val;
        bool possible = true;

        for(int i=0; i<n; i++){
            scanf("%d",&val);
            if(val<=left || val>=right)
                possible = false;
            else{
                if(val>=point)
                    right = val;
                else if(val<=point)
                    left =  val;
            }
        }

        if(possible)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
