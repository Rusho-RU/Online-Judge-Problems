#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define INF 0x3f3f3f3f

long long pow2[31], a, b, avrg[31];

long long recur(int n, int m){
    if(n>m || n<0 || m<0) return INF;

    cout<<n<<" "<<m<<endl;

    long long ret = avrg[m], hold = pow2[m];

    if(n)
        ret-=avrg[n], hold-=pow2[n];

    if(ret)
        ret*=b*hold;
    else
        ret = a;

    return min(ret, recur(n, m-1) + recur(m-1, m));
}

int main(){
    FasterIO;

    pow2[0] = 1;

    for(int i=1; i<31; i++)
        pow2[i] = pow2[i-1]*2;

    int n, k;

    while(cin>>n>>k>>a>>b){
        int data[k];

        for(int i=0; i<k; i++)
            cin>>data[i];

        sort(data, data+k);

        int cnt = 0;

        long long bb = 1;

        for(int i=0; i<k; i++){
            while(data[i]>bb){
                avrg[cnt] = i;
                bb*=2;
                cnt++;
            }
            avrg[cnt] = i+1;
        }

        cout<<recur(0, n)<<endl;
    }

    return 0;
}
