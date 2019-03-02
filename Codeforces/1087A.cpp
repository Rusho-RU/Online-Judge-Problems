#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    string s;

    while(cin>>s){
        string decrypted = s;

        int first_one = s.size()/2;

        if(s.size()%2==0)
            first_one--;

        decrypted[0] = s[first_one];

        for(int i=first_one - 1, j=2; i>=0; i--, j+=2)
            decrypted[j] = s[i];

        for(int i=first_one + 1, j=1; i<s.size(); i++, j+=2)
            decrypted[j] = s[i];

        cout<<decrypted<<endl;
    }

    return 0;
}

