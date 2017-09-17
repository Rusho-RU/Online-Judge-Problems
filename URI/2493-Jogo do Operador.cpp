#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c, char ch){
    if(ch=='I') return (a+b!=c && a-b!=c && a*b!=c);
    if(ch=='+') return a+b==c;
    if(ch=='-') return a-b==c;
    if(ch=='*') return a*b==c;
}

int main(){
    int p;
    while(scanf("%d",&p)==1){
        int a[p],b[p],c[p];

        for(int i=0;i<p;i++)
            scanf("%d %d=%d",&a[i],&b[i],&c[i]);

        char s[100],ch;
        int ind;

        vector<string>wrong;

        for(int i=0;i<p;i++){
            scanf("%s %d %c",s,&ind,&ch);
            ind--;
            if(!check(a[ind],b[ind],c[ind],ch)){
                wrong.push_back(s);
            }
        }

        if(wrong.empty()) printf("You Shall All Pass!\n");

        else if(wrong.size()==p) printf("None Shall Pass!\n");

        else{
            sort(wrong.begin(),wrong.end());
            cout<<wrong[0];
            for(int i=1;i<wrong.size();i++) cout<<" "<<wrong[i];

            printf("\n");
        }
    }

    return 0;
}
