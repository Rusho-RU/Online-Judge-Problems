#include <stdio.h>

int main(){
    char s[55],v[55],ch;
    scanf("%s",s);
    int i,j;
    for(i=0,j=0;s[i]!='\0';i++)
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            v[j]=s[i];
            j++;
        }
    int l=j,limit=l/2;
    for(i=0;i<limit;i++){
        if(v[i]!=v[l-i-1]){
            ch='N';
            break;
        }
    }
    if(i==limit)
        ch='S';
    printf("%c\n",ch);
    return 0;
}
