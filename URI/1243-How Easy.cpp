#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bool isLetter(char ch){
    if(ch>='A' && ch<='Z') return true;
    if(ch>='a' && ch<='z') return true;
    return false;
}

bool isWord(const string& s){
    if(s.size()==1 && !isLetter(s[0]))
        return false;

    for(int i=0; i<s.size()-1; i++){
        if(!isLetter(s[i]))
            return false;
    }

    int id = s.size()-1;

    if(isLetter(s[id]) || s[id]=='.')
        return true;

    return false;
}

int main(){
    string s;

    while(getline(cin, s)){
        int words = 0, cnt=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]!=' '){
                string word;
                word+=s[i];

                while(++i<s.size() && s[i]!=' ')
                    word+=s[i];
                i--;

                if(isWord(word)){
                    words++, cnt+=word.size();
                    if(word[word.size()-1]=='.')
                        cnt--;
                }
            }
        }

        int avrge = 0;

        if(words)
            avrge = cnt/words;

        if(avrge<=3)
            cout<<"250"<<endl;
        else if(avrge>=6)
            cout<<"1000"<<endl;
        else
            cout<<"500"<<endl;
    }

    return 0;
}
