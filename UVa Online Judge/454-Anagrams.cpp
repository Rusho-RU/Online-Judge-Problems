#include <bits/stdc++.h>
using namespace std;

struct type{
    string main,sorted;
};

bool cmp(type a, type b){
    return a.main<b.main;
}

int main(){
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
        char c;
        vector<type>data;
        type temp;
        map<string,vector<string> >m;
        vector<string>v;
        int i,j;
        while(1){
            while(1){
                scanf("%c",&c);
                if(c=='\n') break;
                temp.main+=c;
                if(c!=' ') temp.sorted+=c;
            }
            if(temp.main[0]==0)
                break;
            sort(temp.sorted.begin(),temp.sorted.end());
            data.push_back(temp);
            temp.main.clear();
            temp.sorted.clear();
        }

        sort(data.begin(),data.end(),cmp);

        for(i=0;i<data.size();i++){
            for(j=i+1;j<data.size();j++){
                if(data[i].sorted==data[j].sorted){
                    cout<<data[i].main<<" = "<<data[j].main<<endl;
                }
            }
        }
        if(t) printf("\n");
    }
    return 0;
}
