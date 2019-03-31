#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        vector<int>digit;
        int ans = 1;

        while(n){
            digit.push_back(n%10);
            ans*=n%10;
            n/=10;
        }

        int d = digit.size();

        int mul;

        for(int i=d-1;i>=0;i--){
            mul=digit[i]-1;
            for(int j=d-1;j>i;j--)
                mul*=digit[j];
            mul*=pow(9, i);
            ans=max(ans,mul);
        }

        mul = pow(9, d-1);

        ans = max(ans, mul);

        cout<<ans<<endl;
    }

    return 0;
}

