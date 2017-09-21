#include <stdio.h>

int main(){
    while(1){
        long long int n,i;
        scanf("%lld",&n);
        if(n==0)
            break;
        int people[n],out[n],max=0;
        for(i=0;i<n;i++){
            scanf("%d",&people[i]);
            if(people[i]>max)
                max=people[i];
        }
        long long int temp[max+1];
        for(i=0;i<=max;i++)
            temp[i]=0;

        for(i=0;i<n;i++)
            temp[people[i]]++;

        for(i=0;i<max;i++)
            temp[i+1]+=temp[i];

        for(i=n-1;i>-1;i--){
            out[temp[people[i]]-1]=people[i];
            temp[people[i]]--;
        }
        for(i=0;i<n;i++){
            if(i!=0)
                printf(" ");
            printf("%d",out[i]);
        }
        printf("\n");
    }
    return 0;
}
