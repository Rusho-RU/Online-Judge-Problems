#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, Case=0;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int b=0, n=s.size();

        for(int i=1; i<n; i++)
            if(s[i]=='B')
                b++;

        n--;
        cout<<"Case #"<<++Case<<": ";
        if(b==n || b<(n+1)/2)
            cout<<"N\n";
        else
            cout<<"Y\n";
    }

    return 0;
}


