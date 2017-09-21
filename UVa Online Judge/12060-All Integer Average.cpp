#include <bits/stdc++.h>
using namespace std;

long long gcd(long long u, long long  v)
{
    long long shift;
    if (u==0) return v;
    if (v==0) return u;
    shift=__builtin_ctz(u | v);
    u>>=__builtin_ctz(u);
    do{
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned long long t=v;
            v=u;
            u=t;
        }
        v=v-u;
    } while (v!=0);
    return u<<shift;
}

int digit(int n){
    int i;
    for(i=0;n;i++) n/=10;
    return i;
}

int main(){
    int n,c=0;
    while(scanf("%d",&n),n){
        c++;
        int a[n],i,sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        printf("Case %d:\n",c);
        if(sum%n==0){
            if(sum>=0)
                printf("%d\n",sum/n);
            else
                printf("- %d\n",(~sum+1)/n);
        }

        else{
            bool neg;
            if(sum<0) sum=-sum,neg=true;
            else neg=false;
            int f=gcd(sum,n),digit_n;
            sum/=f,n/=f;
            if(sum<n){
                digit_n=digit(n);
                if(!neg){
                    printf("%*d\n",digit_n,sum);
                    for(i=0;i<digit_n;i++)
                        printf("-");
                    printf("\n%d\n",n);
                }

                else{
                    printf("%*d\n- ",digit_n+2,sum);
                    for(i=0;i<digit_n;i++)
                        printf("-");
                    printf("\n%*d\n",2+digit_n,n);
                }
            }

            else{
                int w=sum/n,digit_w=digit(w);
                digit_n=digit(n);
                sum%=n;
                if(!neg){
                    printf("%*d\n%d",digit_n+digit_w,sum,w);
                    for(i=0;i<digit_n;i++)
                        printf("-");
                    printf("\n%*d\n",digit_n+digit_w,n);
                }

                else{
                    printf("%*d\n- %d",2+digit_n+digit_w,sum,w);
                    for(i=0;i<digit_n;i++)
                        printf("-");
                    printf("\n%*d\n",2+digit_n+digit_w,n);
                }
            }
        }
    }
    return 0;
}
