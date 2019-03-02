#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    string s;

    cin>>t;

    while(t--){
        cin>>s;

        vector<int>v;
        sort(s.begin(), s.end());
        int cnt = 1;

        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1])
                cnt++;
            else{
                v.push_back(cnt);
                cnt=1;
            }
        }

        v.push_back(cnt);

        sort(v.begin(), v.end(), greater<int>());

        int n = (int)v.size(), sz = s.size(), ans=INT_MAX;

        for(int ch=1; ch<=26; ch++){
            if(sz%ch) continue;

            int avrg = sz/ch, sum=0;

            if(ch<n){
                for(int i=0; i<n; i++){
                    if(i<ch){
                        if(v[i]>avrg)
                            sum+=v[i]-avrg;
                    }
                    else
                        sum+=v[i];
                }
                sum*=2;
            }

            else{
                for(int i=0; i<ch; i++){
                    sum+=abs(v[i]-avrg);
                }
            }

            ans = min(ans, sum/2);
        }

        cout<<ans<<endl;
    }

    return 0;
}

