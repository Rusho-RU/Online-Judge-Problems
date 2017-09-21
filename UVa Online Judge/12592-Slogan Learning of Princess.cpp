#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    map<string,string>m;
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<2*n;i++){
        if(i%2){
            getline(cin,s2);
            m[s1]=s2;
        }
        else getline(cin,s1);
    }
    scanf("%d",&n);
    getchar();
    while(n--){
        getline(cin,s1);
        cout<<m[s1]<<endl;
    }
    return 0;
}
