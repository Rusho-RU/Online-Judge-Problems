#include <bits/stdc++.h>
using namespace std;

int main(){
    int data[6];
    bool found = false;

    for(int i=0; i<6; i++){
        cin>>data[i];
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(i==j)
                continue;
            for(int k=0; k<6; k++){
                if(k==i || k==j)
                    continue;
                for(int x=0; x<6; x++){
                    if(x==i || x==j || x==k)
                        continue;
                    for(int y=0; y<6; y++){
                        if(y==i || y==j || y==k || y==x)
                            continue;
                        for(int z=0; z<6; z++){
                            if(z==i || z==j || z==k || z==x || z==y)
                                continue;
                            if(data[i] + data[j] + data[k] == data[x] + data[y] + data[z])
                                found = true;
                        }
                    }
                }
            }
        }
    }

    if(found)
        puts("YES");
    else
        puts("NO");

    return 0;
}
