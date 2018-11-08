#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    map<char, bool>mp;
    mp['j'] = mp['k'] = true;

    int t;
    cin>>t;

    while(t--){
        int n, sum=0;
        string s;

        cin>>n;

        map<string, int>mp1;

        for(int i=0; i<n; i++){
            cin>>s;
            if(mp1[s]){
                sum+=mp1[s]/2;
                continue;
            }

            int sum1 = 2;

            for(int j=1; j<s.size(); j++){
                if(mp[s[j-1]]==mp[s[j]]){
                    sum1+=4;
                }

                else{
                    sum1+=2;
                }
            }

            mp1[s] = sum1;
            sum+=sum1;
        }

        cout<<sum<<endl;
    }

    return 0;
}
