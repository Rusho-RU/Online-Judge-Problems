#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        long long int s,d,Da,Db;
        scanf("%lld %lld",&s,&d);
        if(s<d)
            printf("impossible\n");
        else{
            Da=s+d;
            Db=s-d;
            if(Da%2!=0 || Db%2!=0)
                printf("impossible\n");
            else
                printf("%lld %lld\n",Da/2,Db/2);
        }
    }
    return 0;
}
