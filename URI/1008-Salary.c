#include <stdio.h>

int main(){
    int N,W;
    double H,S;
    scanf("%d%d%lf",&N,&W,&H);
    S=W*H;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",N,S);
    return 0;
}
