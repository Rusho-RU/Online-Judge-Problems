#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,k,l,flag=0,count=0;
        scanf("%d",&n);
        int lim=sqrt(n)+2;
        for(i=0;i<lim;i++){
            for(j=0;j<lim;j++){
                for(k=0;k<lim;k++){
                    for(l=0;l<lim;l++){
                        if(i*i+j*j+k*k+l*l==n){
                            printf("%d %d %d %d\n",i,j,k,l);
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1){
                        if(l) count++;
                        break;
                    }
                }
                if(flag==1){
                    if(k) count++;
                    break;
                }
            }
            if(flag==1){
                if(j) count++;
                break;
            }
        }
        if(i) count++;
        printf("%d\n",count);
    }
    return 0;
}
