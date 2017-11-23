#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    int left[n], right[n];

    for(int i=0; i<n; i++)
        scanf("%d%d",&left[i],&right[i]);

    int cnt = 0;
    bool visited[n];
    memset(visited, false, sizeof visited);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(!visited[i] && left[j]<left[i] && right[i]<right[j])
                cnt++, visited[i] = true;

            if(!visited[j] && left[i]<left[j] && right[j]<right[i])
                cnt++, visited[j] = true;
        }
    }

    printf("%d\n",cnt);

    return 0;
}
