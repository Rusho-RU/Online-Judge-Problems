#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
#define limit MAX+1

//bool not_prime[MAX+1];
bool prime[MAX+1];
vector<int>Prime;
int Size[MAX+1],woo[3]={2,4,2};

/*void sieve(){
    Size[1]=1,Size[2]=2,Size[3]=3,Size[4]=3,Size[5]=4,Size[6]=4;
    prime.push_back(1),prime.push_back(2),prime.push_back(3),prime.push_back(5);
    for(int i=4;i<=MAX;i+=2)
        not_prime[i]=true;

    for(int i=9;i<=MAX;i+=6)
        not_prime[i]=true;

    for(int i=25;i<=MAX;i+=10)
        not_prime[i]=true;

    int hold,rem,x,y;
    for(int i=7,k=1;i<=MAX;k++){
        if(!not_prime[i]){
            prime.push_back(i);
            hold=woo[k&1];
            for(int j=i*i;j<=MAX;){
                not_prime[j]=true;
                j+=hold*i;
                hold=woo[hold%4];
            }

        }
        y=i;
        rem=k&1;
        i+=woo[rem];
        for(;y<i;y++) Size[y]=prime.size();
    }
}*/

int SieveOfAtkin(){
    prime[1]=prime[2]=prime[3]=true;
    for (int x = 1; x*x < limit; x++){
        for (int y = 1; y*y < limit; y++){
            int n = (4*x*x)+(y*y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                prime[n]^=true;

            n = (3*x*x)+(y*y);
            if (n <= limit && n % 12 == 7)
                prime[n]^=true;

            n = (3*x*x)-(y*y);
            if (x > y && n <= limit && n % 12 == 11)
                prime[n]^=true;
        }
    }

    for (int r = 5; r*r < limit; r++){
        if (prime[r]){
            for (int i = r*r; i < limit; i += r*r)
                prime[i] = false;
         }
    }
}

void Insert(){
    for(int i=1;i<=MAX;i++){
        if(prime[i]){
            Prime.push_back(i);
        }
        Size[i]=Prime.size();
    }
}

int main(){
    SieveOfAtkin();
    Insert();
    int n,c;
    while(scanf("%d%d",&n,&c)==2){
        printf("%d %d:",n,c);
        int center=Size[n]/2;
        if(Size[n]%2) c--;
        int Start=center-c,End=center+c;
        if(Size[n]%2==0) End--;
        if(Start<0) Start=0;
        if(End>=Size[n]) End=Size[n]-1;
        for(int i=Start;i<=End;i++){
            printf(" %d",Prime[i]);
        }
        printf("\n\n");
    }
    return 0;
}
