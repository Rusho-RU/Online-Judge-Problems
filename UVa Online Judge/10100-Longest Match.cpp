#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    int Case=0;
    while(getline(cin,t)){
        int i,j;
        string h;
        vector<string>s1,s2;
        for(i=0;i<t.size();i++){
            for(j=i;j<t.size();j++){
                if(t[j]>='A' && t[j]<='Z' || t[j]>='a' && t[j]<='z')
                    h+=t[j];
                else break;
            }
            i=j;
            s1.push_back(h);
            h.clear();
        }

        getline(cin,t);
        for(i=0;i<t.size();i++){
            for(j=i;j<t.size();j++){
                if(t[j]>='A' && t[j]<='Z' || t[j]>='a' && t[j]<='z')
                    h+=t[j];
                else break;
            }
            i=j;
            s2.push_back(h);
            h.clear();
        }

        int m=0,c,hold;

        for(int i=0;i<s2.size();i++){
            c=0,hold=i;
            for(int j=0;j<s1.size() && hold<s2.size();j++){
                if(s2[hold]==s1[j]){
                    c++;
                    hold++;
                }
            }
            m=max(m,c);
        }

        printf("%d. ",++Case);

        if(!m){
            puts("Blank!");
            continue;
        }

        printf("Length of longest match:%2d\n",m);
    }
    return 0;
}
