#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int row,col;
    while(scanf("%d%d",&row,&col)==2){
        getchar();
        int i,j;
        char c[row][col+5];
        for(i=0;i<row;i++){
            for(j=0;j<col;j++)
                scanf("%c",&c[i][j]);
            getchar();
        }
        int count=0,sum;
        string s;
        for(i=0;i<row-1;i++){
            for(j=0;j<col-1;j++){
                s+=c[i][j];
                s+=c[i+1][j];
                s+=c[i][j+1];
                s+=c[i+1][j+1];
                if(s.find('f')!=-1 && s.find('a')!=-1 && s.find('c')!=-1 && s.find('e')!=-1)
                    count++;
                s.clear();
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
