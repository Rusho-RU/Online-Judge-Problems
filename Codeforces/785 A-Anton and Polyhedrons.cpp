#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>poly;
    poly["Tetrahedron"]=4,poly["Cube"]=6,poly["Octahedron"]=8,poly["Dodecahedron"]=12,poly["Icosahedron"]=20;
    int n;
    while(scanf("%d",&n)==1){
        string s;
        long long sum=0;
        while(n--){
            cin>>s;
            sum+=poly[s];
        }
        printf("%I64d\n",sum);
    }
    return 0;
}
