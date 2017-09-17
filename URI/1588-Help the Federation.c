#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,i,j;
        scanf("%d%d",&a,&b);
        char team[a][25],k[25],l[25];
        int total[a],n,m,max,rem;
        for(i=0;i<a;i++){
            scanf("%s",team[i]);
            total[i]=0;
        }
        for(i=0;i<b;i++){
            scanf("%d %s %d %s",&n,k,&m,l);
            if(n>m){
                for(j=0;j<a;j++){
                    if(strcmp(team[j],k)==0)
                        total[j]++;
                }
            }
            else if(m>n){
                for(j=0;j<a;j++){
                    if(strcmp(team[j],l)==0)
                        total[j]++;
                }
            }
        }
        for(i=0;i<a;i++){
            max=0,rem=0;
            for(j=0;j<a;j++){
                if(total[j]>max){
                    max=total[j],rem=j;
                }
            }
            printf("%s\n",team[rem]);
            total[rem]=-1;
        }
    }
}
