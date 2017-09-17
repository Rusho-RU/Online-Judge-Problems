#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        if(a+b<=c || b+c<=a || c+a<=b)
            printf("Invalido\n");
        else{
            if(a==b && b==c)
                printf("Valido-Equilatero\n");
            else if(a==b || b==c || a==c)
                printf("Valido-Isoceles\n");
            else
                printf("Valido-Escaleno\n");

            if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)
                printf("Retangulo: S\n");
            else
                printf("Retangulo: N\n");
        }
    }
    return 0;
}
