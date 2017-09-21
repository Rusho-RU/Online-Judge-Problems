#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>data;
    map<int, int>mapped;
    while(scanf("%d",&n)==1){
        if(!mapped[n])
            data.push_back(n);
        mapped[n]++;
    }

    for(int i=0;i<data.size();i++)
        printf("%d %d\n",data[i],mapped[data[i]]);

    return 0;
}
