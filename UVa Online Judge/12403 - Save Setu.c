#include <stdio.h>

void main(){
    int n,i;
    scanf("%d",&n);
    long long int donate,account=0;
    for(i=0;i<n;i++){
        char s[10];
        scanf("%s",s);
        if(s[0]=='d'){
            scanf("%lld",&donate);
            account=account+donate;
        }
        else
            printf("%lld\n",account);
    }
    exit(0);
}
