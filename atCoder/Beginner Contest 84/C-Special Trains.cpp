#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    int c[n], s[n], f[n];

    for(int i=0; i<n-1; i++)
        scanf("%d%d%d",&c[i], &s[i], &f[i]);

    for(int i=0; i<n-1; i++){
        int time = s[i] + c[i];

        for(int j=i+1; j<n-1; j++){
            if(s[j] > time)
                time += s[j] - time;

            if(time%f[j] != 0)
                time += (((time/f[j]) + 1) * f[j]) - time;

            time += c[j];
        }

        printf("%d\n",time);
    }

    puts("0");

    return 0;
}
