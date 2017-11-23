#include <bits/stdc++.h>
using namespace std;

int decide(int x, int n){
    if(x>n)
        return 1;
    if(x<1)
        return n;
    else
        return x;
}

int main(){
    int n,k;

    while(scanf("%d %d",&n,&k)==2){
        int data[n+1];

        memset(data, -1, sizeof data);

        int fox[k], val, sum=0;

        for(int i=0; i<k; i++){
            scanf("%d",&fox[i]);
            data[fox[i]] = 1;
        }

        vector<int>hide;

        for(int i=0; i<k; i++){
            scanf("%d",&val);
            data[val] = 2;
            hide.push_back(val);
        }

        int x,y;

        for(int i=0; i<k; i++){
            x = decide(fox[i]+1,n);
            y=decide(fox[i]-1,n);

            if(data[x]==2){
                if(data[decide(x+1,n)]==1)
                    if(data[y]==2)
                        sum++, data[y] = -1;
                    else
                        sum++, data[x] = -1;
                else
                    sum++, data[x] = -1;
            }

            else if(data[y]==2){
                if(data[decide(y-1,n)]==1)
                    if(data[x]==2)
                        sum++, data[x] = -1;
                    else
                        sum++, data[y] = -1;
                else
                    sum++, data[y] = -1;
            }

            else{
                for(int i=0; i<hide.size(); i++)
                    if(data[hide[i]]==2){
                        data[hide[i]] = -1;
                        break;
                    }
                sum+=2;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}
