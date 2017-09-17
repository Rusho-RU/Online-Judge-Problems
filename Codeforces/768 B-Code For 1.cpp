#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,l,r;
    while(scanf("%I64d%I64d%I64d",&n,&l,&r)==3){
        vector<long long>v;
        long long hold,rem,i,j;
        v.push_back(n);
        vector<long long>::iterator it;
        for(i=0;i<v.size();i++){
            if(v[i]>1){
                rem=i;
                hold=v[i];
                it=v.begin();
                v.erase(it+i);
                it=v.begin();
                v.insert(it+i,hold/2);
                it=v.begin();
                v.insert(it+i+1,hold%2);
                it=v.begin();
                v.insert(it+i+2,hold/2);
                i--;
            }
        }
        long long count=0;
        for(i=l-1;i<r;i++)
            if(v[i]==1)
                count++;

        printf("%I64d\n",count);
    }
    return 0;
}
