#include <stdio.h>

int main(){
    int i=-2,j=65;
    for(;;){
        i=i+3;
        j=j-5;
        printf("I=%d J=%d\n",i,j);
        if(j==0)
            break;
    }
}
