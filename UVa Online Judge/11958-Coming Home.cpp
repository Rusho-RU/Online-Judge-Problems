#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n,hh,mm;
        scanf("%d %d:%d",&n, &hh, &mm);

        int current = hh*60+mm, mn = INT_MAX, duration;

        while(n--){
            scanf("%d:%d%d",&hh, &mm, &duration);

            int depart = hh*60+mm;

            if(depart<current)
                depart+=24*60;

            mn = min(mn, depart-current+duration);
        }

        printf("Case %d: %d\n",++Case,mn);
    }

    return 0;
}
