#include <stdio.h>
#define MAX 35

char data[MAX][20];
double adj[MAX][MAX];

void reset(){
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            adj[i][j] = 0.0;
        }
    }

    return;
}

int strlenth(char s[]){
    int len = 0, i;

    for(i=0; s[i]!='\0'; i++, len++);

    return len;
}

int comp(char s1[], char s2[]){
    int len1 = strlenth(s1);
    int len2 = strlenth(s2);
    int i;

    if(len1!=len2)
        return 0;

    for(i=0; i<len1; i++){
        if(s1[i]!=s2[i])
            return 0;
    }

    return 1;
}

int indexOf(char s[], int n){
    int i;
    for(i=0; i<n; i++){
        if(comp(data[i], s))
            return i;
    }

    return -1;
}

int main(){
    int n, Case=0;

    while(scanf("%d", &n) && n){
        reset();

        char s1[20], s2[20];
        int i, j, k;
        double val;

        for(i=0; i<n; i++)
            scanf("%s", data[i]);

        int m;
        scanf("%d", &m);

        for(i=0; i<m; i++){
            scanf("%s %lf %s", s1, &val, s2);
            int u = indexOf(s1, n), v = indexOf(s2, n);

            adj[u][v] = val;
        }

        for(k=0; k<n; k++){
            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    double hold = adj[i][k] * adj[k][j];
                    if(hold>adj[i][j])
                        adj[i][j] = hold;
                }
            }
        }

        int possible = 0;

        for(i=0; i<n; i++){
            if(adj[i][i]>1.0)
                possible = 1;
        }

        printf("Case %d: ", ++Case);

        if(possible){
            puts("Yes");
        }

        else{
            puts("No");
        }
    }
}
