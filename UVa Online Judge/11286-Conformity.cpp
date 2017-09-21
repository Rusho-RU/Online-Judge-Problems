#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>
#include <queue>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n),n){
        vector<int>v[n];
        int rem=0;
        map<vector<int> , int> M;
        int i,m,j,max=0;
        for(j=0;j<n;j++){
            for(i=0;i<5;i++){
                scanf("%d",&m);
                v[j].push_back(m);
            }
            sort(v[j].begin(),v[j].end());
            M[v[j]]++;
            if(M[v[j]]>max)
                max=M[v[j]];
        }
        if(max==1)
            printf("%d\n",n);
        else{
            map<vector<int> , int>::iterator it=M.begin();
            int count=0;
            for(;it!=M.end();it++){
                if(it->second==max)
                    count++;
            }
            printf("%d\n",max*count);
        }
    }
    return 0;
}
