#include <stdio.h>

void main(){
    for(;;){
        int n;
        scanf("%d",&n);
        if(n==0)
            break;
        else{
            int i,x,y,a,b;
            scanf("%d %d",&a,&b);
            for(i=0;i<n;i++){
                scanf("%d %d",&x,&y);
                if(x==a || y==b)
                    printf("divisa\n");

                else if(x>a && y>b)
                    printf("NE\n");

                else if(x<a && y>b)
                    printf("NO\n");

                else if(x<a && y<b)
                    printf("SO\n");

                else if(x>a && y<b)
                    printf("SE\n");
            }
        }
    }
    exit(0);
}
