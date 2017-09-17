#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int t11,t21,t22,t12;
        scanf("%d x %d",&t11,&t21);
        scanf("%d x %d",&t22,&t12);
        if(t11+t12>t21+t22)
            printf("Time 1\n");
        else if(t11+t12<t21+t22)
            printf("Time 2\n");
        else{
            if(t12>t21)
                printf("Time 1\n");
            else if(t12<t21)
                printf("Time 2\n");
            else
                printf("Penaltis\n");
        }
    }
    return 0;
}
