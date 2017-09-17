#include <bits/stdc++.h>
using namespace std;

struct type{
    int x,y;
};

bool comp(const type& a, const type& b){
    return a.x>b.x;
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int h,ans=2,x,y;
        type hold;
        vector<type>data;
        for(int i=0;i<n;i++){
            scanf("%d%d",&x,&y);
            if(ans==2 && x-y!=0)
                ans=1;
            hold.x=x,hold.y=y;
            data.push_back(hold);
        }

        if(ans==2){
            vector<type>v(data);
            sort(v.begin(),v.end(),comp);
            for(int i=0;i<n;i++){
                if(data[i].x!=v[i].x){
                    ans=0;
                    break;
                }
            }
        }

        if(ans==0) printf("unrated\n");
        else if(ans==1) printf("rated\n");
        else printf("maybe\n");
    }
    return 0;
}
