#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount

vector<int>factors;
int ans;

int factorize(int n){
    int freq, mx=-1;
    factors.clear();

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            freq = 0;
            ans*=i;
            while(n%i==0){
                n/=i;
                freq++;
            }

            factors.push_back(freq);
            mx = max(mx, freq);
        }
    }

    if(n!=1){
        factors.push_back(1);
        mx = max(mx, 1);
        ans*=n;
    }

    return mx;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        if(n==1){
            cout<<1<<" "<<0<<endl;
            continue;
        }

        ans = 1;

        int mx = factorize(n);
        int mxx = ceil((long double)log2(mx));

        mx = pow(2,mxx);

        bool same = true;

        for(int i=0; i<factors.size(); i++){
            if(factors[i]!=mx){
                same = false;
            }
        }

        if(!same){
            mxx++;
        }

        cout<<ans<<" "<<mxx<<endl;
    }

    return 0;
}
