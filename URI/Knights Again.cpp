#include <bits/stdc++.h>
using namespace std;

int main(){
    int row1, row2;
    char col1, col2;

    while(scanf(" %c %d %c %d",&col1, &row1, &col2, &row2)==4){
        int diff1 = col1-col2;
        int diff2 = abs(row1-row2);
        diff1 = abs(diff1);

        if(diff1 + diff2 == 3)
            puts("VALIDO");
        else
            puts("INVALIDO");
    }

    return 0;
}
