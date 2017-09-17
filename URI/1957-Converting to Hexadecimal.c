#include <stdio.h>
#include <string.h>

void main(){
    unsigned long long int n,a;
    int i=0;
    char s[100000];
    scanf("%llu",&n);
    for(;n!=0;){
        a=n%16;
        n=n/16;
        if(a>9){
            if(a==10)
                s[i]='A';
            else if(a==11)
                s[i]='B';
            else if(a==12)
                s[i]='C';
            else if(a==13)
                s[i]='D';
            else if(a==14)
                s[i]='E';
            else if(a==15)
                s[i]='F';
            i++;
        }
        else{
            s[i]='0'+a;
            i++;
        }
    }
    int len=strlen(s);
    for(i=len-1;i>-1;i--)
        printf("%c",s[i]);
    printf("\n");
    exit(0);
}
