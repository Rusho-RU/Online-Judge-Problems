#include <stdio.h>
void main(){
    char s[10000],c,ch;
    int count,i,j;
    for(;;){
        if(gets(s)==NULL)
            exit(0);
        else{
            count=0;
            for(i=0;s[i]!='\0';i++){
                for(j=i;s[j]>='A'&&s[j]<='z';j++)
                    if(j==i)
                        count++;
                i=j;
            }
            printf("%d\n",count);
        }
    }
}
