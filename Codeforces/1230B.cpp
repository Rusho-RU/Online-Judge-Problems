#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    string s;
    int k, n;

    while(cin>>n>>k>>s){
        if(s.size()==1 && k){
            cout<<'0'<<endl;
            continue;
        }

        for(int i=0; i<s.size() && k; i++){
            if(i==0){
                if(s[i]!='1'){
                    s[i] = '1';
                    k--;
                }
            }

            else{
                if(s[i]!='0'){
                    s[i] = '0';
                    k--;
                }
            }
        }

        cout<<s<<endl;
    }

    return 0;
}

