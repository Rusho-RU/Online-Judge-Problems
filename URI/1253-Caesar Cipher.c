#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s[55];
        scanf("%s",s);
        int d,i,hold;
        scanf("%d",&d);
        for(i=0;s[i]!='\0';i++){
            hold=d;
            if(s[i]-d<65)
                hold=d-26;
            s[i]-=hold;
        }
        printf("%s\n",s);
    }
    return 0;
}
