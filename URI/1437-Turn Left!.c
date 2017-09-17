#include <stdio.h>

int main(){
    int n;
    while(1){
        char c;
        int p=0,i,h;
        scanf("%d",&n);
        if(n==0)
            break;
        char s[n+4];
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++){
            if(s[i]=='D')
                p--;
            else
                p++;
        }
        if(p<0){
            h=p/4;
            p+=4*(h+1);
        }
        if(p%4==0)
            printf("N\n");
        else if(p%2==0)
            printf("S\n");
        else if(p%3==0)
            printf("L\n");
        else
            printf("O\n");
    }
    return 0;
}
