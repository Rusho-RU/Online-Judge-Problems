#include <stdio.h>
#include <string.h>

void main(void){
    char p[101][101],*sum1,*temp_sum;
    int n,l1,l2,limit,h,i,j,k,l,temp,hold;
    scanf("%s",p[0]);
    sum1=p[0];
    if(p[0][0]=='0' && !p[0][1])
        exit(0);
    for(n=1;;n++){
        l1=strlen(sum1);
        if(n!=99)
            scanf("%s",p[n]);
        else{
            p[n][0]='0';
        }
        if(p[n][0]=='0'){
            break;
        }
        l2=strlen(p[n]);
        if(l1<l2){
            limit=l1;
            h=l2;
            temp_sum=p[n];
        }
        else{
            limit=l2;
            h=l1;
            temp_sum=sum1;
        }
        hold=0;
        for(i=limit-1,j=h-1,k=l1-1,l=l2-1;i>-1;i--,j--,k--,l--){
            temp=(p[n][l]-'0')+(sum1[k]-'0')+hold;
            if(temp>=10){
                temp=temp-10;
                hold=1;
            }
            else
                hold=0;
            sum1[j]=temp+'0';
        }
        for(i=j;i>-1;i--,j--){
            if(temp_sum>='0' && temp_sum<='9')
                sum1[j]=temp_sum[i];
        }
    }
    printf("%s\n",p[n]);
}
