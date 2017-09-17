#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    while(gets(s)){
        int l=strlen(s),flag1=0,flag2=0,flag3=0,i;
        if(l<6 || l>32)
            printf("Senha invalida.\n");
        else{
            for(i=0;i<l;i++){
                if(s[i]>='A' && s[i]<='Z')
                    flag1=1;
                else if(s[i]>='a' && s[i]<='z')
                    flag2=1;
                else if(s[i]>='0' && s[i]<='9')
                    flag3=1;
                else
                    break;
            }
            if(flag1==1 && flag2==1 && flag3==1 && i==l)
                printf("Senha valida.\n");
            else
                printf("Senha invalida.\n");
        }
    }
    return 0;
}
