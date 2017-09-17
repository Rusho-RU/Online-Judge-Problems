#include <bits/stdc++.h>
using namespace std;

long long absolute(long long n){
    if(n<0) return -n;
    else return n;
}

int main(){
    long long b1,q,l,m;
    while(scanf("%I64d %I64d %I64d %I64d",&b1,&q,&l,&m)==4){
        map<long long,int>rem;
        long long count=0;
        if(q && q!=1 && q!=-1 && b1){
            long long i=b1;
            while(1){
                if(absolute(i)>l) break;
                rem[i]=1;
                count++;
                i*=q;
            }
        }
        long long temp;
        map<long long,int>bad;
        for(int i=0;i<m;i++){
            scanf("%I64d",&temp);
            bad[temp]=1;
            if(rem[temp]) count--;
        }

        if(absolute(b1)>l) printf("0\n");

        else if(q==0){
            if(!bad[b1] && !bad[0]) printf("inf\n");
            else if(bad[b1] && bad[0]) printf("0\n");
            else if(bad[0]) printf("1\n");
            else printf("inf\n");
        }

        else if(b1==0){
            if(bad[b1]) printf("0\n");
            else printf("inf\n");
        }

        else if(q==1){
            if(bad[b1]) printf("0\n");
            else printf("inf\n");
        }

        else if(q==-1){
            if(bad[b1] && bad[-b1]) printf("0\n");
            else printf("inf\n");
        }

        else{
            if(count<0) count=0;
            printf("%I64d\n",count);
        }
    }
    return 0;
}
