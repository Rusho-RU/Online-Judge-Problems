#include <bits/stdc++.h>
using namespace std;

#define MAX 2000000000
vector<int>humble;

void calculate(){
    humble.push_back(1);
    for(int i=2;i<=MAX;i+=2)
        humble.push_back(i);

    for(int i=3;i<=MAX;i+=6)
        humble.push_back(i);

    for(int i=5;i<=MAX;i+=10)
        humble.push_back(i);

    for(int i=7;i<=MAX;i+=14)
        humble.push_back(i);

    sort(humble.begin(),humble.end());
}

int main(){
    cout<<humble[1000]<<endl;
    int n;
    while(scanf("%d",&n)==1){

    }
    return 0;
}
