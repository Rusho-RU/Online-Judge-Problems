#include <stdio.h>
#include <string.h>

void main(void){
    int n;
    char s1[100],s2[100],ara[100];
    for(;;){
        scanf("%d",&n);
        if(n==-1)
            exit(0);
        else{
            scanf(" %s",s1);
            scanf(" %s",s2);
            printf("Round %d\n",n);
            int l2=strlen(s2),l1=strlen(s1),i,j,count=0,draw=0,flag,l=0,k,hold;
            for(i=0;i<l2;i++){
                flag=0;
                if(i==0){
                    ara[i]=s2[i];
                    l++;
                }
                else{
                    for(k=l-1;k>-1;k--)
                        if(s2[i]==ara[k]){
                            flag=1;
                            break;
                        }
                }

                if(flag==0){
                    ara[l]=s2[i];
                    l++;
                    hold=count;
                    for(j=0;j<l1;j++){
                        if(s2[i]==s1[j])
                            count++;
                    }
                    if(hold==count)
                        draw++;
                    if(draw==7)
                        break;
                }
            }

            if(count==l1)
                printf("You win.\n");
            else if(draw==7)
                printf("You lose.\n");
            else if(draw<7)
                printf("You chickened out.\n");
        }
    }
}
