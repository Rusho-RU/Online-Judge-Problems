#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(3);
    int val = 3, inc = 5;

    while(val+inc <=100000){
        v.push_back(val+inc);
        val+=inc;
        inc+=2;
    }

    int t;
    scanf("%d",&t);

    while(t--){
        int n,k,i;
        scanf("%d%d",&n,&k);

        for(i=0; i<v.size(); i++){
            if(v[i]>n)
                break;
        }

        if(i==k)
            puts("I am married now");
        else
            puts("Baba amar ki biye hobe na");
    }

    return 0;
}
