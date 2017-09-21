#include <stdio.h>
#include <string.h>

int main(){
    char s1[1000000],s2[1000000];
    while(scanf("%s %s",s1,s2)==2){
        long int i,j=0,l1=strlen(s1),l2=strlen(s2);
        for(i=0;i<l1;i++){
            for(;j<l2;j++)
                if(s2[j]==s1[i])
                    break;
            if(j==l2)
                break;
            j++;
        }

        if(i==l1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
