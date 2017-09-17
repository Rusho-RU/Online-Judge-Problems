#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s1[52],s2[53];
        int i,j,k;
        scanf("%s %s",s1,s2);
        int l1=strlen(s1),l2=strlen(s2),limit;
        if(l1<l2)
            limit=l1;
        else
            limit=l2;
        for(j=0,k=0;s1[j]!='\0' || s2[k]!='\0';){
            if(j<l1){
                printf("%c",s1[j]);
                j++;
            }
            if(k<l2){
                printf("%c",s2[k]);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
