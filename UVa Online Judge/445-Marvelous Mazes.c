#include <stdio.h>
#include <string.h>

int main(){
    for(;;){
        char s[1000];
        if(gets(s)==NULL)
            exit(0);
        else{
            int l=strlen(s),i,sum=0,n,j;
            for(i=0;i<l;i++){
                if(s[i]=='!')
                    printf("\n");
                else
                    if(s[i]>47 && s[i]<58){
                        n=s[i]-'0';
                        sum=sum+n;
                    }

                    else{
                        if(s[i]=='b')
                            s[i]=' ';
                        for(j=0;j<sum;j++)
                            printf("%c",s[i]);
                        sum=0;
                    }
            }
        }
        printf("\n");
    }
}
