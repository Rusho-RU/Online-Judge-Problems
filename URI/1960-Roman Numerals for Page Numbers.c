#include <stdio.h>

int power(int a, int b);

void main(){
    for(;;){
    int n,p[]={1,5,10,50,100,500,1000},x,flag=0,i,j,s;
    char c[]={'I','V','X','L','C','D','M'};
    scanf("%d",&n);
    int a=n,b=n,y=n,v=n;
    for(;y!=0;){
        b=v;
        for(i=1;;i++){
            s=b%10;
            b=b/10;
            if(b==0)
                break;
        }
        y=s*power(10,(i-1));
        printf("%d\n",y);
        v=v-y;
        for(i=1;i<7;i++){
            x=p[i]-y;
            if(x>0)
                for(j=0;j<6;j++){
                    if(x==p[j]){
                        flag=1;
                        printf("%c",c[j]);
                        y=y+p[j];
                        break;
                    }
                }
            if(flag==1)
                break;
        }
        if(y==1000){
            printf("%c",'M');
            y=y-1000;
        }

        else if(y>=500){
            printf("%c",'D');
            y=y-500;
        }

        else if(y>=100){
            printf("%c",'C');
            y=y-100;
        }

        else if(y>=50){
            printf("%c",'L');
            y=y-50;
        }

        else if(y>=10){
            printf("%c",'X');
            y=y-10;
        }

        else if(y>=5){
            printf("%c",'V');
            y=y-5;
        }

        else{
            printf("%c",'I');
            y=y-1;
            //printf("\t%d\t",y);
        }
    }
    printf("\n");
}
}

int power(int a, int b){
    int i,p=1;
    for(i=0;i<b;i++)
        p=p*a;
    return p;
}
