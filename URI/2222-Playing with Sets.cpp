#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<int>v[n];
        map<int,bool>m[n];

        for(int i=0;i<n;i++){
            int n1,num;
            scanf("%d",&n1);
            for(int j=0;j<n1;j++){
                scanf("%d",&num);
                if(m[i].find(num)==m[i].end())v[i].push_back(num);
                m[i][num]=true;
            }
        }

        int q,a,b,c;
        scanf("%d",&q);
        while(q--){
            scanf("%d%d%d",&a,&b,&c);
            b--, c--;
            int Count;

            if(a==1){
                Count=0;
                int h1,h2;
                if(v[b].size()<v[c].size())
                    h1=b,h2=c;
                else h1=c,h2=b;

                for(int i=0;i<v[h1].size();i++)
                    if(m[h2].find(v[h1][i])!=m[h2].end()) Count++;

                printf("%d\n",Count);
            }

            else{
                int h1,h2;
                if(v[b].size()<v[c].size())
                    h1=b,h2=c;
                else h1=c,h2=b;
                Count=v[h2].size();

                for(int i=0;i<v[h1].size();i++)
                    if(m[h2].find(v[h1][i])==m[h2].end()) Count++;

                printf("%d\n",Count);
            }
        }
    }
    return 0;
}
