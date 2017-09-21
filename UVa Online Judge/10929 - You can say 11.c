#include <stdio.h>
#include <string.h>

int main(){
    while(1){
        char s[100000];
        scanf(" %[^\n]s",s);
        int l=strlen(s);
        if(l==1 && s[0]=='0')
            break;
        int i,sum1=0,sum2=0;
        for(i=0;i<l;i++){
            if(i%2==0)
                sum1+=(s[i]-'0');

            else
                sum2+=(s[i]-'0');
        }
        int m=sum1-sum2;
        if(m%11==0)
            printf("%s is a multiple of 11.\n",s);
        else
            printf("%s is not a multiple of 11.\n",s);
    }
    return 0;
}
