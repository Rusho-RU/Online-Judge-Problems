#include <stdio.h>

int main(){
    unsigned long long int a,b,carry,sum,count;
    while(1){
        scanf("%llu %llu",&a,&b);
        if(a==0 && b==0)
            break;
        carry=0,count=0;
        for(;;){
            sum=0;
            sum+=a%10;
            a/=10;
            sum+=b%10;
            b/=10;
            sum+=carry;
            if(sum>9){
                carry=1;
                count++;
            }
            else
                carry=0;
            if(a==0 && b==0)
                break;
        }
        if(count==0)
            printf("No carry operation.\n");
        else
            if(count==1)
                printf("%llu carry operation.\n",count);
            else
                printf("%llu carry operations.\n",count);
    }
    return 0;
}
