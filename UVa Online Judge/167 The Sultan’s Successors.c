#include <stdio.h>

#define MAX 8

const int INT_MAX = ~(1<<31);
const int INT_MIN = (1<<31);

int board[8][8], row[MAX];
int used[MAX], number[MAX], mx;

int abs(int n){
    return n<0 ? -n : n;
}

int max(int a, int b){
    return a>b ? a : b;
}

void check(){
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=i+1; j<MAX; j++){
            if(abs(row[number[i]]-row[number[j]])==(j-i))
                return;
        }
    }

    int sum=0, r;
    for(r=0; r<MAX; r++){
        int c = number[r];
        sum+=board[r][c];
    }

    mx = max(mx, sum);

    return;
}

void permutation(int at, int n){
    if(at==n){
        check();
        return;
    }

    int i;
    for(i=0; i<n; i++){
        if(!used[i]){
            used[i] = 1;
            number[at] = i;
            permutation(at+1, n);
            used[i] = 0;
        }
    }

    return;
}

int main(){
    int i;
    for(i=0; i<MAX; i++)
        row[i] = i;

    int t;
    scanf("%d", &t);

    while(t--){
        mx = INT_MIN;
        int i, j;
        for(i=0; i<8; i++)
            for(j=0; j<8; j++)
                scanf("%d", &board[i][j]);

        permutation(0, MAX);

        printf("%5d\n", mx);
    }

    return 0;
}
