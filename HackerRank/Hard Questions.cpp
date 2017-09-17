#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    scanf("%d",&n);
    char v[n+5],c;
    getchar();

    for(int i=0;i<n;i++)
        scanf("%c",&v[i]);

    getchar();

    for(int i=0;i<n;i++){
        scanf("%c",&c);
        if(v[i]!='.' && v[i]!=c) sum++;
    }

    printf("%d\n",sum);
    return 0;
}
