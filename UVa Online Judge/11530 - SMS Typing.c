#include <stdio.h>
int main(){
    char a1[28]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
    int a2[27]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4,1};
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int hold,count=0;
        int j,k;
        char s[102];
        //s[0]=' ';
        getchar();
        scanf("%[^\n]*c",s);
        for(j=0;s[j]!='\0';j++){
            for(k=0;a1[k]!='\0';k++){
                if(s[j]==a1[k])
                    count+=a2[k];
            }
        }
        printf("Case #%d: %d\n",i+1,count);
    }
    return 0;
}
