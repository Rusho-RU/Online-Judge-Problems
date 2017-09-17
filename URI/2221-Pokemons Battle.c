#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int b,a1,d1,l1,a2,d2,l2;
        scanf("%d%d%d%d%d%d%d",&b,&a1,&d1,&l1,&a2,&d2,&l2);
        double d=(a1+d1)/2.0;
        double g=(a2+d2)/2.0;
        if(l1%2==0)
            d+=b;
        if(l2%2==0)
            g+=b;
        if(d>g)
            printf("Dabriel\n");
        else if(g>d)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }
    return 0;
}
