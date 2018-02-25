#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        sort(data, data+n);

        int alice=0, bob=0;

        for(int i=n-1;i>=0; i-=2)
            alice+=data[i];

        for(int i=n-2;i>=0; i-=2)
            bob+=data[i];

        printf("%d\n",alice-bob);
    }

    return 0;
}
