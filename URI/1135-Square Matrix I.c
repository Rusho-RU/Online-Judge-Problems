#include <stdio.h>

int main(){
    int n,m[100][100],y,q,l,a,z,i,j,k,x,b;
    for(;;){
        scanf("%d",&n);
        if(n==0)
            break;
        else if(n==2)
            printf("%3d %3d\n%3d %3d\n\n",n-1,n-1,n-1,n-1);
        else{
            if(n%2==0){
                l=n/2;
                k=l-1;
                y=l;
            }

            else{
                l=(n/2)+1;
                k=l-2;
                y=l-1;
            }

            for(j=0;j<n;j++){
                m[0][j]=1;
                m[n-1][j]=1;
                if(j==0 || j==n-1)
                    m[1][j]=1;
                else
                    m[1][j]=2;
            }

            for(i=2;i<y;i++){
                x=2;
                m[i][0]=1;
                for(j=1;j<l;j++)
                    if(j<=i)
                        m[i][j]=j+1;
                    else{
                        x=m[i][j-1];
                        m[i][j]=x;
                    }
            }

            if(n%2!=0){
                for(j=0;j<l;j++){
                    m[y][j]=j+1;
                }
                for(z=y;z>0;z--,j++){
                    m[y][j]=z;
                }
            }

            for(i=0;i<y;i++){
                for(j=l,b=k;j<n-1;j++,b--)
                    m[i][j]=m[i][b];
                m[i][j]=1;
            }

            for(i=l,q=k;i<n-1;i++,q--)
                for(j=0;j<n;j++)
                    m[i][j]=m[q][j];

            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(j==0)
                        printf("%3d",m[i][j]);
                    else
                        printf(" %3d",m[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
}
