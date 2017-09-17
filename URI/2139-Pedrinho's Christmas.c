#include <stdio.h>

void main(){
    int m,d,i;
    int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    while((scanf("%d%d",&m,&d))!=EOF){
        int sum=0;
        if(m==12 && d==25)
            printf("E natal!\n");
        else if(m==12 && d==24)
            printf("E vespera de natal!\n");
        else if(m==12 && d>25)
            printf("Ja passou!\n");
        else{
            for(i=0;i<m-1;i++){
                sum=sum+a[i];
            }
            sum=sum+d;
            printf("Faltam %d dias para o natal!\n",360-sum);
        }
    }
    return 0;
}
