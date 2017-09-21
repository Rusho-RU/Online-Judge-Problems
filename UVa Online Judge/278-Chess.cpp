#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col,t;
    char c;
    scanf("%d",&t);
    getchar();
    while(t--){
        scanf("%c",&c);
        if(c!='r' && c!='Q' && c!='k' && c!='K'){
            t++;
            continue;
        }
        scanf("%d%d",&row,&col);
        getchar();
        if(c=='k')
            printf("%d\n",(row*col)/2);
        else if(c=='Q' || c=='r')
            if(row<col) printf("%d\n",row);
            else printf("%d\n",col);
        else if(c=='K'){
            if((row==1 && col==1) || (row==1 && col==2) || (row==2 && col==1)) printf("1\n");
            else{
                if(row%2) row++;
                if(col%2) col++;
                printf("%d\n",(row*col)/4);
            }
        }
    }
    return 0;
}
