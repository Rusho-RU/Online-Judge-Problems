#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char s[14];
    char l[6][14]={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
    char w[6][14]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
    for(i=1;;i++){
        int j;
        gets(s);
        if(s[0]=='#')
            break;
        else{
            for(j=0;j<6;j++){
                if(strcmp(s,w[j])==0){
                    printf("Case %d: %s\n",i,l[j]);
                    break;
                }
            }
            if(j==6)
                printf("Case %d: UNKNOWN\n",i);
        }
    }
    return 0;
}
