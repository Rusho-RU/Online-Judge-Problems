#include <bits/stdc++.h>
using namespace std;

#define fasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();

int findMax(const string& s){
    int mx = 0, cnt=0;

    for(int i=1; i<s.size(); i++){
        cnt=0;
        while(s[i]==s[i-1])
            i++, cnt++;
        mx = max(mx, cnt+1);
    }

    mx = max(mx, cnt+1);

    return mx;
}

void check(int n, int* mx, int sz){
    if(sz == *mx){
        if(n%2)
            *mx-=1;
    }

    else if(sz - *mx < n){
        n = n - (sz-*mx);
        *mx = sz;
        if(n&1)
            *mx-=1;
    }

    else{
        *mx+=n;
    }
}

int main(){
    fasterIO;

    int n;

    while(cin>>n){
        string kuro, shiro, katie;
        cin>>kuro>>shiro>>katie;

        sort(kuro.begin(), kuro.end());
        sort(shiro.begin(), shiro.end());
        sort(katie.begin(), katie.end());

        int kuroMax = findMax(kuro);
        int shiroMax = findMax(shiro);
        int katieMax = findMax(katie);

        printf("%d %d %d\n",kuroMax, shiroMax, katieMax);

        check(n, &kuroMax, (int)kuro.size());
        check(n, &shiroMax, (int)kuro.size());
        check(n, &katieMax, (int)kuro.size());

        printf("%d %d %d %d\n",kuro.size(), kuroMax, shiroMax, katieMax);

        int mx = max(kuroMax, max(shiroMax, katieMax));

        if(kuroMax==mx && mx==shiroMax || shiroMax==mx && mx==katieMax || katieMax==mx && mx==kuroMax){
            cout<<"Draw"<<endl;
            continue;
        }

        if(kuroMax==mx){
            cout<<"Kuro"<<endl;
        }

        else if(shiroMax==mx){
            cout<<"Shiro"<<endl;
        }

        else{
            cout<<"Katie"<<endl;
        }
    }

    return 0;
}
