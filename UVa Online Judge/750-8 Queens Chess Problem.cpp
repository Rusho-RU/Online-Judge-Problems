#include <bits/stdc++.h>
using namespace std;

int row[8];
int r,c,cnt;

void check(){
    if(row[c]!=r) return;

    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(abs(row[i] - row[j]) == (j-i))
                return;
        }
    }

    printf("%2d      ",++cnt);

    for(int i=0; i<8; i++){
        printf("%d",row[i]+1);
        if(i==7)
            puts("");
        else
            printf(" ");
    }

    return;
}

int main(){
    for(int i=0; i<8; i++)
        row[i] = i;

    int t;
    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&r,&c);
        r--, c--;

        puts("SOLN       COLUMN");
        puts(" #      1 2 3 4 5 6 7 8\n");

        do{
            check();
        }while(next_permutation(row, row+8));

        cnt=0;

        if(t)
            puts("");
    }

    return 0;
}
