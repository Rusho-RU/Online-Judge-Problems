#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>s>>n;
        int cnt[26] = {};

        for(int i=0; i<s.size(); i++){
            int id = s[i] - 'a';
            cnt[id]++;
        }

        int haveTo = 0;

        for(int i=0; i<26; i++){
            if(cnt[i]>1){
                haveTo+=cnt[i]-1;
            }
        }

        if(haveTo>n)
            puts("NO");
        else
            puts("YES");
    }

    return 0;

}
