#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    while(cin>>n){
        cin>>s;
        int cnt = 0;

        for(int i=0; i<s.size(); i++){
            if(i!=s.size()-1 && s[i]=='U' && s[i+1]=='R' || s[i]=='R' && s[i+1]=='U')
                i++;
            cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}
