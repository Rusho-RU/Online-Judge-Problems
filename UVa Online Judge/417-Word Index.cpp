#include <bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    for(char c1='a';c1<='z';c1++)
        for(char c2=c1+1;c2<='z';c2++)
            for(char c3=c2+1;c3<='z';c3++)
                for(char c4=c3+1;c4<='z';c4++)
                    for(char c5=c4+1;c5<='z';count++,c5++)
                        printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
    printf("%d\n",count);
}
