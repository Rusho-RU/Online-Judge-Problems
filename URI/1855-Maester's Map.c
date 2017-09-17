#include <stdio.h>
int main(){
    int flag,x,y,i=0,j=0,k,xy;
    char s[101][101];
    scanf("%d%d",&x,&y);
    for(i=0;i<y;i++)
        scanf(" %[^\n]c",s[i]);
    i=0;
    xy=x*y;
    for(k=1;k<=xy;){
        if(s[i][j]=='>'){
            j++;
            k++;
            flag=1;
            if(j>=x)
                break;
        }

        else if(s[i][j]=='v'){
            i++;
            k++;
            flag=2;
            if(i>=y)
                break;
        }

        else if(s[i][j]=='<'){
            j--;
            k++;
            flag=3;
            if(j<0)
                break;
        }

        else if(s[i][j]=='^'){
            i--;
            k++;
            flag=4;
            if(i<0)
                break;
        }

        else if(s[i][j]=='*'){
            flag=0;
            break;
        }

        else if(s[i][j]=='.'){
            if(flag==1){
                j++;
                k++;
                if(j>=x)
                    break;
            }

            else if(flag==2){
                i++;
                k++;
                if(i>=y)
                    break;
            }

            else if(flag==3){
                j--;
                k++;
                if(j<0)
                    break;
            }

            else if(flag==4){
                i--;
                k++;
                if(i<0)
                    break;
            }
        }
    }

    if(flag==0)
        printf("*\n");
    else
        printf("!\n");
}
