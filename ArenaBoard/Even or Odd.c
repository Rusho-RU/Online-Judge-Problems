#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int i,n;
        scanf("%d",&n);
        int xor = 0;

        for(i=0; i<n; i++){
            int val;
            scanf("%d",&val);
            xor^=val;
        }

        printf("%d\n",xor);
    }

    return 0;
}
