#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, jorina;
        scanf("%d %d",&n, &jorina);

        vector<int>f,s;

        for(int i=0; i<n; i++){
            int v;
            scanf("%d",&v);
            if(v>jorina)
                f.push_back(i+1);
            else
                s.push_back(i+1);
        }

        printf("Kache Eso\n");
        for(int i=0; i<f.size(); i++){
            printf("%d",f[i]);
            if(i==f.size()-1)
                puts("");
            else
                printf(" ");
        }
        if(f.size()==0)
            puts("");

        printf("Dure Giya Mor\n");
        for(int i=0; i<s.size(); i++){
            printf("%d",s[i]);
            if(i==s.size()-1)
                puts("");
            else
                printf(" ");
        }
        if(s.size()==0)
            puts("");
    }

    return 0;
}
