#include <stdio.h>

int main(){
    int a,b,q,r,i,x;
    for(;;){
    scanf("%d%d",&a,&b);
    if(a>=0 && b>=0){
        q=a/b;
        r=a%b;
    }
    else{
        if((a<0 && b<0) || (a>0 && b<0)){
            for(q=0;;q++)
                if(q*b<a){
                    q=q-1;
                    break;
                }
            if(a>b)
                q=q+1;
            r=a-(q*b);
        }
    }
    printf("%d %d\n",q,r);
    }
}
