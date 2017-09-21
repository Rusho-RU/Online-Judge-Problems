#include <stdio.h>
void main(){
    unsigned long int farm,anim,frnd,sum=0;
    unsigned int n,f,i,j;
    for(;;){
        if(scanf("%u",&n)==EOF)
            exit(0);
        else{
            for(i=0;i<n;i++){
                scanf("%u",&f);
                sum=0;
                for(j=0;j<f;j++){
                    scanf("%lu%lu%lu",&farm,&anim,&frnd);
                    sum=sum+farm*frnd;
                }
                printf("%lu\n",sum);
            }
        }
    }
}
