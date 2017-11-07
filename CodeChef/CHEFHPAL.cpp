#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char letter[26];
    int i=0;
    for(char c='a'; c<='z'; c++)
        letter[i++] = c;

    int t;
    cin>>t;

    while(t--){
        int n,l, length;
        string ans;
        cin>>n>>l;

        if(n==1)
            ans = "a", length = 1;

        else if(l==1){
            for(int i=0; i<n; i++)
                ans += 'a';
            length = n;
        }

        else if(l==2){
            if(n==2)
                ans = "ab", length = 1;

            else if(n==3)
                ans = "aab", length = 2;

            else if(n==4)
                ans = "aabb", length = 2;

            else if(n==5)
                ans = "aaabb", length = 3;

            else if(n==6)
                ans = "aaabbb", length = 3;

            else if(n==7)
                ans = "aaababb", length = 3;

            else if(n==8)
                ans = "aaababbb", length = 3;
            else{
                ans = "aa";
                string hold = "aababb";
                int limit = (n-2)/6, r = (n-2) % 6;

                for(int i=0; i<limit; i++)
                    ans += hold;

                for(int i=0; i<r; i++)
                    ans+=hold[i];
                length = 4;
            }
        }

        else{
            if(l>=n){
                for(int i=0; i<n; i++)
                    ans += letter[i];
                length = 1;
            }

            else{
                string s;
                for(int i=0; i<l ;i++)
                    s+=letter[i];
                int limit = n/l, limit2 = n%l;

                for(int i=0; i<limit; i++)
                    ans+=s;
                for(int i=0; i<limit2; i++)
                    ans+=letter[i];
                length = 1;
            }
        }

        cout<<length<<" "<<ans<<endl;
    }

    return 0;
}
