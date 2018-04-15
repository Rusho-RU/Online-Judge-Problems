#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string str = "", s;
        int n, cnt=0, a=0, b=0;
        cin>>s>>n;

        for(int i=0; i<n; i++){
            str+=s;
        }

        for(int i=0; i<str.size(); i++){
            if(str[i]=='a')
                a++;
            else
                b++;

            if(a>b)
                cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}
