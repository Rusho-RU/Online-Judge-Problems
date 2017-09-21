#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int l,i;
        scanf("%d",&l);
        if(l==0) break;
        l--;
        char s[l][4],a[4]="+x";
        for(i=0;i<l;i++){
            scanf("%s",s[i]);
            if(!strcmp(a,"+x") && strcmp(s[i],"No")){
                strcpy(a,s[i]);
            }

            else if(!strcmp(a,"+y")){
                if(!strcmp(s[i],"+y"))
                    strcpy(a,"-x");
                else if(!strcmp(s[i],"-y"))
                    strcpy(a,"+x");
            }

            else if(!strcmp(a,"-y")){
                if(!strcmp(s[i],"+y"))
                    strcpy(a,"+x");
                else if(!strcmp(s[i],"-y"))
                    strcpy(a,"-x");
            }

            else if(!strcmp(a,"+z")){
                if(!strcmp(s[i],"+z"))
                    strcpy(a,"-x");
                else if(!strcmp(s[i],"-z"))
                    strcpy(a,"+x");
            }

            else if(!strcmp(a,"-z")){
                if(!strcmp(s[i],"+z"))
                    strcpy(a,"+x");
                else if(!strcmp(s[i],"-z"))
                    strcpy(a,"-x");
            }

            else if(!strcmp(a,"-x")){
                if(!strcmp(s[i],"+y"))
                    strcpy(a,"-y");
                else if(!strcmp(s[i],"-y"))
                    strcpy(a,"+y");
                else if(!strcmp(s[i],"+z"))
                    strcpy(a,"-z");
                else if(!strcmp(s[i],"-z"))
                    strcpy(a,"+z");
            }
        }
        printf("%s\n",a);
    }
    return 0;
}
