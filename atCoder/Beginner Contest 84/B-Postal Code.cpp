#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    string s;
    bool isCorrect = true;

    cin>>s;

    for(int i=0; i<a && i<s.size(); i++){
        int n = s[i] - '0';
        if(n<0 || n>9)
            isCorrect = false;
    }

    if(a<s.size() && s[a]!='-')
        isCorrect = false;

    if(a+1<s.size())
        for(int i=a+1; i<s.size(); i++){
            int n = s[i] - '0';
            if(n<0 || n>9)
                isCorrect = false;
        }

    if(isCorrect)
        puts("Yes");

    else
        puts("No");

    return 0;
}
