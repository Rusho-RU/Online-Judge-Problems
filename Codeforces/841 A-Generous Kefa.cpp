#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    while(cin>>n>>k){
        string s;
        cin>>s;
        int d[26];
        memset(d, 0, sizeof d);
        int i;

        for(i=0;i<s.size();i++){
            d[s[i]-'a']++;
        }

        for(i=0;i<26;i++)
            if(d[i] && d[i]>k)
                break;

        if(i==26) puts("YES");
        else puts("NO");
    }

    return 0;
}
