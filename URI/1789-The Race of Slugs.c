#include <stdio.h>

int main(){
    int a[500],n,hold,i;
    while(scanf("%d",&n)!=EOF){
        hold=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>hold)
                hold=a[i];
        }

        if(hold<10)
            printf("1\n");
        else if(hold>=10 && hold <20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
