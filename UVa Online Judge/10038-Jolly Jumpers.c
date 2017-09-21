#include <stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int a[n],i,check=n;
        if(scanf("%d",&a[0])==EOF)
            exit(0);
        int differ[n-1];
        for(i=1;i<n;i++){
            if(scanf("%d",&a[i])==EOF)
                exit(0);
            if(a[i]>a[i-1])
                differ[i-1]=a[i]-a[i-1];
            else
                differ[i-1]=a[i-1]-a[i];
        }
        int limit=n-1;
        for(check=n-1;check!=0;check--){
            for(i=0;i<limit;i++){
                if(differ[i]==check)
                    break;
            }
            if(i==limit)
                break;
        }
        if(check==0)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
