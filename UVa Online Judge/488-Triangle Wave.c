#include <stdio.h>

void main(void){
    int h,a,i,j,n,k,l,m;
    long long int f;
    scanf("%d",&h);
    for(m=0;m<h;m++){
        scanf("%d %lld",&a,&f);
        if(a<10){
            for(i=0;i<f;i++){
                n=2*a-1;
                k=0;
                for(j=1;j<=n;j++){
                    if(j<=a){
                        k++;
                        for(l=0;l<k;l++)
                            printf("%d",k);
                        printf("\n");
                    }
                    else{
                        k--;
                        for(l=0;l<k;l++)
                            printf("%d",k);
                        printf("\n");
                    }
                }
                if(m!=h-1 || i!=f-1)
                    printf("\n");
            }
        }
        else
            printf("Amplitude cannot be this much.\n");
    }
    exit(0);
}
