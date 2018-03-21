#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(getline(cin,s)){
        int valid = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                valid++;
        }

        printf("%d\n",valid);
    }

    return 0;
}
