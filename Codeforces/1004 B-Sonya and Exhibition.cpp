#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    return (a.second-a.first) > (b.second - b.first);
}

int main(){
    int n;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
        printf("%d",i%2);
    puts("");

    return 0;
}
