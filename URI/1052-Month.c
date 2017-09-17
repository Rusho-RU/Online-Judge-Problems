#include <stdio.h>

int main(){
    char c[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n;
    scanf("%d",&n);
    printf("%s\n",c[n-1]);
    return 0;
}
