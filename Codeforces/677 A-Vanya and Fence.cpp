#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h;

    while(scanf("%d%d",&n,&h)==2){
        int length = 0;

        while(n--){
            int height;
            scanf("%d",&height);
            if(height > h)
                length+=2;
            else
                length++;
        }

        printf("%d\n",length);
    }

    return 0;
}
