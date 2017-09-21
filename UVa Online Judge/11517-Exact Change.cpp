#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define MAXa 10010
#define MAXn 110

int amount,dpPrice[MAXn][MAXa],h, dpCent[MAXn][MAXa];
vector<int>price;

int knapPrice(int i, int w){
    if(w>=amount) return w;
    if(i==price.size())
        return INF;

    if(dpPrice[i][w]!=-1)
        return dpPrice[i][w];

    int r1=0, r2=0;
    r1=knapPrice(i+1,w+price[i]), r2=knapPrice(i+1,w);
    return dpPrice[i][w] = min(r1,r2);
}

int knapCent(int i, int w){
    if(w==0) return 0;

    if(i==price.size())
        return INF;

    if(dpCent[i][w]!=-1)
        return dpCent[i][w];

    int r1=INF, r2=INF;
    if(w-price[i]>=0)
        r1=knapCent(i+1,w-price[i]) + 1;
    r2=knapCent(i+1,w);

    return dpCent[i][w] = min(r1,r2);
}

void reset(){
    memset(dpPrice, -1, sizeof dpPrice);
    memset(dpCent, -1, sizeof dpCent);
    price.clear();
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        reset();
        int n,val;
        scanf("%d %d",&amount,&n);

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            price.push_back(val);
        }

        int minPrice=knapPrice(0,0);
        int minCent=knapCent(0,minPrice);

        printf("%d %d\n",minPrice,minCent);
    }

    return 0;
}
