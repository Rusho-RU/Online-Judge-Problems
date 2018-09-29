#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        bool cloud[n];

        for(int i=0; i<n; i++){
            int state;
            scanf("%d",&state);
            cloud[i] = state;
        }

        int jump = 0;

        for(int i=0; i<n-1;){
            if(cloud[i+2]==1)
                i++;
            else
                i+=2;
            jump++;
        }

        printf("%d\n",jump);
    }

    return 0;
}
