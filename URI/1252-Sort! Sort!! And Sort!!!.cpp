#include <bits/stdc++.h>
using namespace std;

int m;

int absolute(int n){
    if(n<0) return -n;
    return n;
}

bool cmp(const int& a, const int& b){
    if(a%m==b%m){
        if(absolute(a)%2 == absolute(b)%2){
            if(absolute(a)%2)
                return a>b;
            return a<b;
        }

        return absolute(a)%2==1;
    }
    return a%m<b%m;
}

int main(){
    int n;
    while(scanf("%d%d",&n,&m) && n+m){
        vector<int>v;
        int val;

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            v.push_back(val);
        }

        sort(v.begin(),v.end(),cmp);

        printf("%d %d\n",n,m);

        for(int i=0;i<v.size();i++)
            printf("%d\n",v[i]);
    }

    puts("0 0");

    return 0;
}
