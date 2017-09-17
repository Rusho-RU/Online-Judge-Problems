#include <stdio.h>

int main(){
    int a[100],highest=0,pos,i;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]>highest){
            highest=a[i];
            pos=i+1;
        }
    }
    printf("%d\n%d\n",a[pos-1],pos);
    return 0;
}
