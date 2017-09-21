#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

int Parent[MAX];

void Reset(int n){
    for(int i=0;i<n;i++)
        Parent[i]=i;
    return;
}

int Find(int x){
    if(Parent[x]==x) return x;
    return Parent[x]=Find(Parent[x]);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,b,success=0,unsuccess=0;
        scanf("%d",&n);
        getchar();
        Reset(n);
        char c;

        while((c=getchar()) && isalpha(c)){
            scanf("%d%d",&a,&b);
            getchar();
            int u=Find(a-1), v=Find(b-1);

            if(c=='c')
                Parent[u]=v;

            else{
                if(u==v) success++;
                else unsuccess++;
            }
        }

        printf("%d,%d\n",success,unsuccess);
        if(t) printf("\n");
    }
    return 0;
}
