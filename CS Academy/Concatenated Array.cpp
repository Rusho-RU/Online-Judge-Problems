#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;

    while(cin>>n>>k){
        string s;
        cin>>s;
        long long zero = 0;

        for(int i=0; i<n && s[i]=='0'; i++)
            zero++;

        if(zero==n){
            cout<<zero*k<<endl;
            continue;
        }

        for(int i=n-1; i>=0 && s[i]=='0'; i--)
            zero++;

        int i,j, cnt,mx=0;

        for(i=0; i<n; i++){
            if(s[i]=='0'){
                cnt=1;
                for(j=i+1; j<n && s[j]=='0'; j++)
                    cnt++;
                i = j;
                mx = max(mx, cnt);
            }
        }

        if(mx>zero || k==1)
            zero = mx;

        cout<<zero<<endl;
    }

    return 0;
}
