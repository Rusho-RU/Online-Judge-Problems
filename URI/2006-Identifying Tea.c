# include <stdio.h>

int main(){
    int n,a[5],count=0,i;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]==n)
            count++;
    }
    printf("%d\n",count);
}
