#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int boys[n];

        for(int i=0; i<n; i++){
            scanf("%d",&boys[i]);
        }

        sort(boys, boys+n);

        int m, cnt=0;
        scanf("%d",&m);
        int girls[m];

        for(int i=0; i<m; i++){
            scanf("%d",&girls[i]);
        }

        sort(girls, girls+m);

        for(int b=0, g=0; b<n && g<m;){
            if(abs(boys[b] - girls[g]) <= 1){
                cnt++;
                b++, g++;
            }

            else if(boys[b] > girls[g])
                g++;
            else
                b++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}
