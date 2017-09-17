#include <stdio.h>

int main(){
    while(1){
    int n,i;
    scanf("%d",&n);
    int a[n],peak,valley,out=1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(a[0]==a[1])
        out=0;
    else if(a[0]>a[1]){
        valley=1;
        peak=0;
    }
    else{
        valley=0;
        peak=1;
    }
    if(out==1)
        for(i=2;i<n;i++){
            if(a[i-1]>a[i])
                valley=1;
            else if(a[i-1]<a[i])
                peak=1;
            if(a[i-1]==a[i] || peak!=valley){
                out=0;
                break;
            }
        }

    printf("%d\n",out);
    }
    return 0;
}
