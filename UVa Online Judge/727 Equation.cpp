#include <bits/stdc++.h>
using namespace std;

bool isNum(char ch){
    return ch>='0' && ch<='9';
}

int main(){
    map<char, int>mp;

    mp['+'] = mp['-'] = 1;
    mp['/'] = mp['*'] = 2;

    int t;
    scanf("%d",&t);

    getchar();
    getchar();

    while(t--){
        char ch;
        stack<char>stck;
        vector<char>v;

        while(scanf("%c", &ch)==1){
            if(ch=='\n') break;
            getchar();

            if(isNum(ch)){
                printf("%c", ch);
                continue;
            }

            if(ch=='('){
                stck.push(ch);
                continue;
            }

            if(ch==')'){
                while(stck.top()!='('){
                    printf("%c", stck.top());
                    stck.pop();
                }
                stck.pop();
                continue;
            }

            while(!stck.empty() && mp[stck.top()]>=mp[ch]){
                printf("%c",stck.top());
                stck.pop();
            }

            stck.push(ch);
        }

        while(!stck.empty()){
            printf("%c",stck.top());
            stck.pop();
        }

        puts("");

        if(t)
            puts("");
    }

    return 0;
}
