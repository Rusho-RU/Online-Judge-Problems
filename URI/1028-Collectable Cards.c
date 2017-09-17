#include <stdio.h>

int ara1[30],ara2[30];

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b,temp,i;
        scanf("%d%d",&a,&b);
        if(b>a){
            temp=a;
            a=b;
            b=temp;
        }
        if(a%b==0)
            printf("%d\n",b);
        else{
            int l1=divisors1(a);
            int l2=divisors2(b);
            printf("%d\n",common(l1,l2));
        }
    }
    return 0;
}

int divisors1(int n){
    int x=n,j,i,limit=sqrt(x);
    for(i=1,j=0;i<=limit;i++)
        if(x%i==0){
            ara1[j++]=i;
            ara1[j++]=x/i;
        }
    return j;
}

int divisors2(int n){
    int x=n,j,i,limit=sqrt(x);
    for(i=1,j=0;i<=limit;i++)
        if(x%i==0){
            ara2[j++]=i;
            ara2[j++]=x/i;
        }
    return j;
}

int common(int l1, int l2){
    int i,j,max=0;
    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            if(ara1[i]==ara2[j])
                if(ara1[i]>max)
                    max=ara1[i];
        }
    }
    return max;
}
