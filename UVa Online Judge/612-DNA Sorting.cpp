#include <bits/stdc++.h>
using namespace std;

typedef struct th{
    char word[55];
    int sort;
}DNA;
DNA dna[105];

int compare(const void *a, const void *b){
    return (((DNA *)a)->sort-((DNA *)b)->sort);
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        int c,r,i,j,k;
        scanf("%d%d",&c,&r);
        for(i=0;i<r;i++){
            scanf("%s",dna[i].word);
            dna[i].sort=0;
            for (j=0;j<c;j++)
                for (k=j+1;k<c;k++)
                    if (dna[i].word[j]>dna[i].word[k])
                        dna[i].sort++;
        }
        qsort(dna,r,sizeof(DNA),compare);
        for(i=0;i<r;i++)
            printf("%s\n",dna[i].word);
        if(t) printf("\n");
    }
    return 0;
}
