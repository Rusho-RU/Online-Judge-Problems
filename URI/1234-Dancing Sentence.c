#include <stdio.h>
#include <string.h>
int main(){
    char s[1000],a[1000];
    while(gets(s)!=NULL){
        int i,j=0,l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]!=' '){
                j++;
                if(j%2!=0 && s[i]>='a' && s[i]<='z')
                    s[i]-=32;
                else if(j%2==0 && s[i]>='A' && s[i]<='Z')
                    s[i]+=32;
            }
            a[i]=s[i];
        }
        a[i]='\0';
        printf("%s\n",a);
    }
    return 0;
}
