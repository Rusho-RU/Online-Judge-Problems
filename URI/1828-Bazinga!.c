#include <stdio.h>

int main(){
    int n,i;
    char s1[10],s2[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s %s",s1,s2);
        if(strcmp(s1,s2)==0)
            printf("Caso #%d: De novo!\n",i);
        else if(strcmp(s1,"tesoura")==0 && strcmp(s2,"papel")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"papel")==0 && strcmp(s2,"pedra")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"pedra")==0 && strcmp(s2,"lagarto")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"lagarto")==0 && strcmp(s2,"Spock")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"Spock")==0 && strcmp(s2,"tesoura")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"tesoura")==0 && strcmp(s2,"lagarto")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"lagarto")==0 && strcmp(s2,"papel")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"papel")==0 && strcmp(s2,"Spock")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"Spock")==0 && strcmp(s2,"pedra")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else if(strcmp(s1,"pedra")==0 && strcmp(s2,"tesoura")==0)
            printf("Caso #%d: Bazinga!\n",i);

        else
            printf("Caso #%d: Raj trapaceou!\n",i);
    }
    return 0;
}
