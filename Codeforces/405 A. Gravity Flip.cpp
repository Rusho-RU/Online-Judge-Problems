#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int cubes[n];

        for(int i=0; i<n; i++){
            scanf("%d",&cubes[i]);
        }

        sort(cubes, cubes+n);

        for(int i=0; i<n; i++){
            printf("%d",cubes[i]);

            if(i==n-1)
                puts("");
            else
                printf(" ");
        }
    }

    return 0;
}
