#include <bits/stdc++.h>
using namespace std;

struct type{
    long long c,w;
    bool marked;
    bool operator<(const type1& a)const{
        c>a.c;
    }
};


int main(){
    long long w,c;
    vector<type>v;
    while(scanf("%lld %lld",&w,&c)==2){
        v.push_back({w,c-w});
    }

    sort(v.begin(),v.end());

    for(int i=0;i<weight.size();i++)
        printf("%lld %lld\n",weight[i].w,weight[i].node->c);

}
