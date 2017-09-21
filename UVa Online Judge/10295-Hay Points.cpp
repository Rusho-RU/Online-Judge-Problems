#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,val,sum;
    string s;
    map<string,int>mp;
    scanf("%d%d",&n,&m);
    while(n--){
        cin>>s;
        scanf("%d",&val);
        mp[s]=val;
    }

    while(m--){
        sum=0;
        while(1){
            cin>>s;
            if(s==".") break;
            sum+=mp[s];
        }
        printf("%d\n",sum);
    }
    return 0;
}
