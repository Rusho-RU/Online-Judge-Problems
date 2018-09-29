#include <stdio.h>

int cnt(int n, int m){
    int p = 0;

    while(1){
        int div = n/m;
        p+=div;
        if(div<m)
            return p;
        n/=m;
    }
}

int factorize(int n, int m){
    int i;
    int ans = 2147483647;

    for(i=2; i*i<=n; i++){
        if(n%i==0){
            int val = cnt(m, i);
            int freq=0;
            while(n%i==0){
                n/=i;
                freq++;
            }
            val/=freq;

            if(val<ans)
                ans=val;
        }
    }

    if(n!=1){
        int val = cnt(m, n);
        if(val<ans)
            ans=val;
    }

    return ans;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, m;
        scanf("%d%d",&n,&m);

        int ans = factorize(m, n);

        printf("%d\n",ans);
    }

    return 0;
}
