#include <stdio.h>

int main(){
    int h,d,f,u;
    while(1){
        scanf("%d %d %d %d",&h,&u,&d,&f);
        if(h==0)
            break;
        int i;
        double pass=0,less=(f*u)/100.0,carry=(double)u;
        for(i=1;;i++){
            if(carry>0.0){
                pass+=carry;
                if(pass>h){
                    printf("success on day %d\n",i);
                    break;
                }
            }
            pass-=d;
            if(pass<0.0){
                printf("failure on day %d\n",i);
                break;
            }
            carry-=less;
        }
    }
    return 0;
}
