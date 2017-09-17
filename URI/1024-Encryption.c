#include <stdio.h>
#include <string.h>

int main(){
    int n,i,l,k,j;
    char s[1000];
    scanf("%d",&n);
    for(k=0;k<n;k++){
        char *p;
        scanf(" %[^\n]c",s);
        p=s;
        l=strlen(s);
        for(i=0;i<l;i++){
            if((p[i]>96 && p[i]<123) || (p[i]>64 && p[i]<91))
                p[i]=p[i]+3;
        }
        int limit1=l/2,limit2;
        if(l%2!=0)
            limit2=limit1+1;
        else
            limit2=limit1;

        char c;
        for(i=0,j=l-1;i<limit1;i++,j--){
            c=p[i];
            p[i]=p[j];
            p[j]=c;
        }
        for(i=limit1;i<l;i++){
            p[i]=p[i]-1;
        }
        printf("%s\n",p);
    }
    return 0;
}
