#include <stdio.h>
#include <string.h>

int word_check(char* p1, char* p2);

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char s[10];
        scanf("%s",s);
        if(word_check("one",s)==1 || word_check("one",s)==0)
            printf("1\n");
        else if(word_check("two",s)==1 || word_check("two",s)==0)
            printf("2\n");
        else if(word_check("three",s)==1 || word_check("three",s)==0)
            printf("3\n");
    }
    return 0;
}

int word_check(char* p1, char* p2){
    int count=0,i;
    for(i=0;p1[i]!='\0' && p2[i]!='\0';i++){
        if(p1[i]!=p2[i])
            count++;
    }

    return count;
}
