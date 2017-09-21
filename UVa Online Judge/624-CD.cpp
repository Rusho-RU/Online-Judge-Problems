#include <bits/stdc++.h>
using namespace std;

struct type{
    int value,index;
};

bool comp_val(type a, type b){
    return a.value<b.value;
}

bool comp_ind(type a, type b){
    return a.index<b.index;
}

int main(){
    int n,m,i;
    while(scanf("%d %d",&n,&m)==2){
        vector<type>v;
        type temp;
        int sum=0;
        for(int i=0;i<m;i++){
            scanf("%d",&temp.value);
            temp.index=i;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),comp_val);

        for(i=0;i<v.size();i++){
            sum+=v[i].value;
            if(sum>n){
                sum-=v[i].value;
                break;
            }
        }

        v.erase(v.begin()+i,v.end());
        sort(v.begin(),v.end(),comp_ind);

        for(i=0;i<v.size();i++)
            printf("%d\n",v[i].value);
    }
    return 0;
}
