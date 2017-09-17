#include <stdio.h>

int main(){
    int i,j,h=7,count;
    for(i=1;i<10;i+=2){
        count=0;
        for(j=6+i;count<3;j--){
            printf("I=%d J=%d\n",i,j);
            count++;
        }
    }
    return 0;
}
