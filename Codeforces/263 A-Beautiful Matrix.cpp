#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c,val;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&val);
            if(val)
                r = i+1, c = j+1;
        }
    }

    printf("%d\n",abs(r-3) + abs(c-3));

    return 0;
}
