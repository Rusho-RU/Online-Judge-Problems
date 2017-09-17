#include <bits/stdc++.h>
using namespace std;

int check(string s1, string s2){
    string c1,c2;
    if(s1==s2) return 0;
    for(int i=0;i<s1.size();i++){
        s2+=s2[i];
        c1+=s2[i];
        if(c1+s1==s2) return i+1;
    }
    return -1;
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        getchar();
        map<char,bool>rem;
        string s[n];
        char c;
        bool exist=true;

        while(scanf("%c",&c) && c!='\n'){
            s[0]+=c;
            rem[c]=true;
        }

        for(int i=2;i<=n;i++){
            while(scanf("%c",&c) && c!='\n'){
                s[i-1]+=c;
                if(!rem[c]) exist=false;
            }
        }

        string st;
        int sum,min=1000000000;
        if(!exist) printf("-1\n");
        else{
            for(int i=0;i<n && exist;i++){
                sum=0;
                for(int j=0;j<n && exist;j++){
                    if(i!=j){
                        int rem=check(s[i],s[j]);
                        if(rem==-1) exist=false;
                        sum+=rem;
                    }
                }
                if(sum<min) min=sum;
            }
            printf("%d\n",min);
        }
    }
    return 0;
}
