#include <bits/stdc++.h>
using namespace std;

#define MAX 500
#define MAXn 500000
int record[MAX][MAX], u[MAXn+1], v[MAXn+1];

inline void reset(int n){
    for(int i=0; i<n;i++)
        record[u[i]][v[i]]=record[v[i]][u[i]]=0;
}

inline void check(int n){
    for(int i=0;i<n;i++){
        if(record[v[i]][u[i]]!=record[u[i]][v[i]]){
            puts("NO");
            return;
        }
    }

    puts("YES");
    return;
}

int main(){
    int n;

    while(scanf("%d",&n) && n){
        for(int i=0; i<n; i++){
            scanf("%d %d",&u[i],&v[i]);
            record[u[i]][v[i]]++;
        }

        check(n);
        reset(n);
    }

    return 0;
}
