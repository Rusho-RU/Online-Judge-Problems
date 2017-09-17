#include <stdio.h>

int main(){
    char s[4][10]={"Rolien","Naej","Elehcim","Odranoel"};
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
        scanf("%d",&m);
        while(m--){
            int a;
            scanf("%d",&a);
            printf("%s\n",s[a-1]);
        }
    }
    return 0;
}
