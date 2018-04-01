#include <bits/stdc++.h>
using namespace std;

bool check(int n, int m){
    string s[n];

    for(int i=0; i<n; i++)
        cin>>s[i];

    bool row[n], col[m];

    memset(row, false, sizeof row);
    memset(col, false, sizeof col);

    for(int i=0; i<n; i++){
        if(row[i])
            continue;
        row[i] = true;
        for(int j=i+1;j<n; j++){
            if(s[i]==s[j])
                row[j] = true;
        }

        for(int j=0; j<m; j++){
            if(s[i][j]=='#'){
                if(col[j])
                    return false;
                col[j] = true;
            }
        }
    }

    return true;
}

int main(){
    int n,m;

    while(scanf("%d%d",&n,&m)==2){
        if(check(n, m))
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}
