#include <stdio.h>
#define MAX 27

int used[MAX], number[MAX], k;

void permutation(int at, int n){
    if(k==0)
        return;

    if(at==n+1){
        for(int i=1; i<=n; i++)
            printf("%c", 'A'+number[i]-1);
        puts("");
        k--;

        return;
    }

    for(int i=1; i<=n; i++){
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
    int t, Case=0;
    scanf("%d", &t);

    while(t--){
        int n;

        scanf("%d%d", &n, &k);

        printf("Case %d:\n", ++Case);
        permutation(1, n);
    }

    return 0;
}
