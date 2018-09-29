#include <bits/stdc++.h>
using namespace std;

int main(){
    int l;

    while(scanf("%d",&l)==1){
        int n;
        scanf("%d",&n);

        while(n--){
            int w, h;
            scanf("%d %d",&w,&h);

            if(w<l || h<l)
                puts("UPLOAD ANOTHER");
            else if(w==h)
                puts("ACCEPTED");
            else
                puts("CROP IT");
        }
    }

    return 0;
}
