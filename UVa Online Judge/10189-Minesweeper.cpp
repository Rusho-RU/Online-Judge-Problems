#include <bits/stdc++.h>
using namespace std;
#define max 110
int main(){
    int r,c,cas=0;
    while(scanf("%d%d",&r,&c),r,c){
        cas++;
        char s[max][max];
        int i,j,count;
        getchar();
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                scanf("%c",&s[i][j]);
            }
            getchar();
        }

        for(j=0;j<=c+1;j++)
            s[0][j]='0';

        for(j=0;j<=c+1;j++)
            s[r+1][j]='0';

        for(i=0;i<=r+1;i++)
            s[i][0]='0';

        for(i=0;i<=r+1;i++)
            s[i][c+1]='0';

        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                if(s[i][j]!='*'){
                    count=0;
                    if(s[i][j+1]=='*')
                        count++;

                    if(s[i][j-1]=='*')
                        count++;

                    if(s[i+1][j]=='*')
                        count++;

                    if(s[i-1][j]=='*')
                        count++;

                    if(s[i-1][j-1]=='*')
                        count++;

                    if(s[i-1][j+1]=='*')
                        count++;

                    if(s[i+1][j-1]=='*')
                        count++;

                    if(s[i+1][j+1]=='*')
                        count++;

                    s[i][j]='0'+count;
                }
            }
        }

        if(cas!=1) printf("\n");
        printf("Field #%d:\n",cas);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++)
                printf("%c",s[i][j]);
            printf("\n");
        }
    }
    return 0;
}
