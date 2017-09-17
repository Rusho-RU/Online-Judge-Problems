#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int data[n],ans,Count=0;
        vector<int>s,v;
        map<int,int>m;

        for(int i=0;i<n;i++){
            scanf("%d",&data[i]);
            if((i%2==0 && data[i]%2==0) || (i%2==1 && data[i]%2==1)){
                Count+=((data[i]/2)-(data[i]%2==0));
                continue;
            }

            else if(data[i]>2) s.push_back(i);
            else v.push_back(i);
        }

        if(s.empty() && v.empty()) ans=0;

        else if(s.size()>=v.size() && (s.size()+v.size())%2==0) ans=(s.size()+v.size())/2;

        else{
            ans=s.size();
            int hold=v.size()-s.size();
            if(hold%2==0){
                if(Count>=hold) ans+=hold;
                else ans=-1;
            }
            else ans=-1;
        }

        printf("%d\n",ans);
    }
    return 0;
}
