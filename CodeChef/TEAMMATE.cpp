#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define MAXn 100009

long long val[MAXn];

void calculate(){
    val[0] = val[1] = val[2] = 1;

    for(int i=4; i<MAXn; i+=2)
        val[i] = (val[i-2] * (i-1))%MOD;

    return;
}

int main(){
    FasterIO;
    calculate();

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int skill[n];

        for(int i=0; i<n; i++)
            cin>>skill[i];

        sort(skill, skill+n, greater<int>());

        long long prev=0, now=1, upay=1;

        for(int i=1; i<n; i++){
            if(skill[i]==skill[i-1])
                now++;

            else{
                if(prev&1){
                    upay = (upay * now)%MOD;
                    now--;
                }

                prev = now;

                if(now&1)
                    now--;

                upay = (upay * val[now])%MOD;

                now = 1;
            }
        }

        if(prev&1){
            upay = (upay * now)%MOD;
            now--;
        }
        upay = (upay * val[now])%MOD;

        cout<<upay<<endl;
    }

    return 0;
}
