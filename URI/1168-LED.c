#include <stdio.h>

int main(){
    int n;
    char c[10]={'1','2','3','4','5','6','7','8','9','0'};
    int a[10]={2,5,5,4,5,6,3,7,6,6};
    scanf("%d",&n);
    while(n--){
        char s[110];
        scanf("%s",s);
        int i,j,count=0;
        for(i=0;s[i]!='\0';i++){
            for(j=0;j<10;j++){
                if(s[i]==c[j]){
                    count+=a[j];
                    break;
                }
            }
        }
        printf("%d leds\n",count);
    }
    return 0;
}
