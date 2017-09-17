#include <stdio.h>
#include <string.h>

int power(int a, int b);

int main(){
    int count=0,x=0,j,i;
    for(;;){
        char s[10];
        scanf(" %[^\n]c",s);
        if(strcmp(s,"caw caw")==0){
            printf("%d\n",x);
            x=0;
            count++;
            if(count==3)
                break;
        }

        else{
            for(i=2,j=0;i>-1;j++,i--){
                if(s[i]=='-')
                    x=x+0;
                else
                    x=x+power(2,j);
            }
        }
    }
}

int power(int a, int b){
    int i,p=1;
    for(i=0;i<b;i++)
        p=p*a;
    return p;
}
