#include <bits/stdc++.h>
using namespace std;

struct type{
    int num,ind;
    type(int a, int b):num(a),ind(b){}
    bool operator<(const type& a)const{
        return num<a.num;
    }
};

int main(){
    int n,num;
    scanf("%d",&n);
    vector<type>v1,v2;
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        v1.push_back(type(num,i));
    }

    sort(v1.begin(),v1.end());

    for(int i=0;i<n;i++){
        scanf("%d",&num);
        v2.push_back(type(num,i));
    }

    sort(v2.begin(),v2.end());

    if(v1[0].ind==v2[0].ind)
        if(v1[0].num==v2[0].num) printf("%d\n",v1[0].num+min(v1[1].num,v2[1].num));

        else if(v1[0].num<v2[0].num) printf("%d\n",v1[0].num+v2[1].num);

        else printf("%d\n",v1[1].num+v2[0].num);

    else printf("%d\n",v1[0].num+v2[0].num);

    return 0;
}
