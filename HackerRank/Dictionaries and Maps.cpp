#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    scanf("%d",&n);
    char name[n][20];
    long num[n];
    for(i=0;i<n;i++)
        scanf("%s %ld",name[i],&num[i]);
    char c[20];
    for(i=0;i<n;i++){
        scanf("%s",c);
        for(j=0;j<n;j++){
            if(strcmp(c,name[j])==0)
                printf("%s=%ld\n",name[j],num[j]);
        }
        printf("%d\n",j);
        if(j==n)
            printf("Not found\n");
    }
    return 0;
}
