#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    string s;
    int n;

    while(cin>>n){
        cin>>s;

        int gold = 0, cnt = 0, prev = 0, ans = 0;

        for(auto ch : s){
            if(ch=='G')
                gold++, cnt++;
            else
                prev = cnt, cnt = 0;

            ans = max(ans, prev+cnt+1);
        }

        ans = min(ans, gold);

        cout<<ans<<endl;
    }

    return 0;
}

