#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0)
        return -n;
    return n;
}

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)==2){
        int data[n];
        bool doomed =  false;

        while(m--){
            int k;
            scanf("%d",&k);
            memset(data, 0, sizeof data);
            map<int,bool>m;
            int traitor = k;

            for(int i=0; i<k; i++){
                int v;
                scanf("%d",&v);

                if(m.find(v)!=m.end())
                    continue;

                m[v] = true;

                v = absolute(v)-1;
                data[v]++;
                if(data[v]>1)
                    traitor--;
            }

            if(traitor == k)
                doomed = true;
        }

        if(doomed)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
