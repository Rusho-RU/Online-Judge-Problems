#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    string s;

    while(cin>>s){
        int a = 0;
        int n = (int)s.size();

        for(int i=0; i<n; i++){
            if(s[i]=='a')
                a++;
        }

        while(a<=n/2)
            n--;

        cout<<n<<endl;
    }

    return 0;
}

