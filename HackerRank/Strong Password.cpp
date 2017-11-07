#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool digit, low, up, special;
    digit = low = up = special = false;

    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z')
            low = true;
        else if(s[i]>='A' && s[i]<='Z')
            up = true;
        else if(s[i]>='0' && s[i]<='9')
            digit = true;
        else
            special = true;
    }

    int sz = s.size(), cnt = 0;

    if(!low)
        cnt++, sz++;
    if(!up)
        cnt++, sz++;
    if(!digit)
        cnt++, sz++;
    if(!special)
        cnt++, sz++;

    if(sz<6)
        cnt+= 6-sz;

    printf("%d\n",cnt);
    return 0;
}
