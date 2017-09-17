#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,p=0,r;
        scanf("%d",&n);
        char a[n][20],s[n][20],o[4];
        for(i=0;i<n;i++){
            scanf("%s",s[i]);
            if(s[i][0]=='S'){
                scanf("%s %d",o,&r);
                strcpy(a[i],a[r-1]);
            }
            else
                strcpy(a[i],s[i]);
        }
        for(i=0;i<n;i++){
            if(strcmp(a[i],"RIGHT")==0)
                p++;
            else
                p--;
        }
        printf("%d\n",p);
    }
    return 0;
}
