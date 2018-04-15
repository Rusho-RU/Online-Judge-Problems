#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int cnt=1, sum=0;
        char now = s[0];

        for(int i=1; i<s.size(); i++){
            if(s[i]==now)
                cnt++;
            else{
                sum+=(cnt*(cnt+1))/2;
                cnt=1;
                now = s[i];
            }
        }

        sum+=(cnt* (cnt+1))/2;;
        printf("%d\n",sum);
    }

    return 0;
}

