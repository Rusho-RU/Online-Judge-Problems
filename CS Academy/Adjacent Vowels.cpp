#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    return false;
}

int main(){
    int n;

    while(cin>>n){
        string s;
        cin>>s;
        int cnt=0;

        for(int i=1; i<n; i++){
            if(isVowel(s[i-1]) && isVowel(s[i]))
                cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}
