#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int t,val;
        stack<int>stck;
        int data[51];

        memset(data, 0, sizeof data);

        while(n--){
            scanf("%d %d",&t,&val);

            if(t==1)
                data[val]++;

            else{
                if(data[val]==0){
                    puts("Sorry");
                    continue;
                }

                int cnt=0;
                for(int i=val; i<51; i++)
                    if(data[i]>0)
                        data[i]--, cnt++;


                printf("%d\n",cnt);
            }
        }
    }

    return 0;
}
