#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 100050

long long data[MAX], p;

void calculate(){
    data[0] = p = 1;

    for(int i=1; i<MAX; i++){
        p=(p*2) % MOD;
        data[i] = (p - data[i-1]) % MOD;
    }

    return;
}

long long solve(int n, char type){
    if(type=='s')
        return (2*solve(n-1, 'd'))%MOD;
    return data[n];
}

long long allW(int n){
    if(n==0) return 1;

    long long ans = 0;

    ans = (2*solve(n-1, 'd')) % MOD;
    if(n>1)
        ans = (ans + solve(n-1, 's')) % MOD;

    return ans;
}

int main(){
    calculate();

    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        char s[MAX];
        long long ans = 1;
        scanf(" %s",s);

        int len = strlen(s);

        int cnt=0, i = 0;

        bool hasW = false;

        for(int i=0;  i<len; i++)
            if(s[i]=='W')
                hasW = true;

        if(!hasW){
            printf("Case %d: 0\n", ++Case);
            continue;
        }

        while(i<len && s[i]=='W'){
            cnt++, i++;
        }

        if(i==len){
            ans = 3;
            for(int i=1; i<cnt; i++)
                ans=(ans * 2)%MOD;
            printf("Case %d: %lld\n", ++Case, ans);
            continue;
        }

        else
            ans = allW(cnt);

        char prev = s[i];

        for(i=i+1; i<len; i++){
            cnt = 0;

            while(i<len && s[i]=='W')
                cnt++, i++;

            if(cnt){
                if(i==len){
                    ans = (ans * allW(cnt)) % MOD;
                }

                else if(prev==s[i])
                    ans = (ans * solve(cnt, 's')) % MOD;
                else
                    ans = (ans * solve(cnt, 'd')) % MOD;
            }

            prev = s[i];
        }

        printf("Case %d: %lld\n", ++Case, ans);
    }

    return 0;
}
