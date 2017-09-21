#include <bits/stdc++.h>
using namespace std;

int main(){
    int b,s;
    while(scanf("%d%d",&s,&b),b||s){
        int i,r,l,right[s+1],left[s+1];
        for(i=1;i<=s;i++){
            right[i]=i+1;
            left[i]=i-1;
        }
        left[1]=-1;
        right[s]=-1;
        for(i=0;i<b;i++){
            scanf("%d%d",&l,&r);
            left[right[r]]=left[l];
            if(left[l]!=-1)
                printf("%d ",left[l]);
            else
                printf("* ");
            right[left[l]]=right[r];
            if(right[r]!=-1)
                printf("%d\n",right[r]);
            else
                printf("*\n");
        }
        printf("-\n");
    }
    return 0;
}
