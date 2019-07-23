#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

bool check(int cnt[]){
    for(int i=0; i<11; i++){
        if(cnt[i]==0)
            continue;
        cnt[i]--;
        bool done = true;

        int x=0;

        for(int j=0; j<11; j++){
            if(cnt[j]){
                x = cnt[j];
                break;
            }
        }

        for(int j=0; j<11; j++){
            if(cnt[j]==0){
                continue;
            }

            if(cnt[j]!=x){
                done = false;
                break;
            }
        }

        cnt[i]++;
        if(done)
            return true;
    }

    return false;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];
        int cnt[11];

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<n; i++){
            cin>>data[i];
            cnt[data[i]]++;
        }

        for(int i=n-1; i>=0; i--){
            if(check(cnt)){
                cout<<i+1<<endl;
                break;
            }
            cnt[data[i]]--;
        }
    }

    return 0;
}

