#include <stdio.h>
#include <string.h>

void main(void){
    int n,l,m;
    char p[50][41];

    strcpy(p[0],"                   .                    ");

    int scale[]={0,1,2,3};
    char r[]={' ','.','x','W'};
    scanf("%d",&n);

    for(l=0;l<n;l++){
        int DNA[10],i,j,sum,k,u,v,a;
        char ch;
        for(i=0;i<10;i++)
            scanf("%d",&DNA[i]);
        for(m=0;m<40;m++)
            printf("%c",p[0][m]);
        printf("\n");
        for(i=1;i<50;i++){
            p[i-1][-1]=' ';
            p[i-1][40]=' ';

            for(j=0;j<40;j++){
                sum=0;
                ch=' ';
                if(p[i-1][j-1]==' ')
                    u=0;
                else if(p[i-1][j-1]=='.')
                    u=1;
                else if(p[i-1][j-1]=='x')
                    u=2;
                else if(p[i-1][j-1]=='W')
                    u=3;

                if(p[i-1][j]==' ')
                    v=0;
                else if(p[i-1][j]=='.')
                    v=1;
                else if(p[i-1][j]=='x')
                    v=2;
                else if(p[i-1][j]=='W')
                    v=3;

                if(p[i-1][j+1]==' ')
                    a=0;
                else if(p[i-1][j+1]=='.')
                    a=1;
                else if(p[i-1][j+1]=='x')
                    a=2;
                else if(p[i-1][j+1]=='W')
                    a=3;
                sum=u+v+a;

                if(DNA[sum]==0)
                    ch=' ';
                else if(DNA[sum]==1)
                    ch='.';
                else if(DNA[sum]==2)
                    ch='x';
                else if(DNA[sum]==3)
                    ch='W';
                p[i][j]=ch;
                printf("%c",ch);
            }
            printf("\n");
        }
        if(l!=n-1)
        printf("\n");
    }
    exit(0);
}
