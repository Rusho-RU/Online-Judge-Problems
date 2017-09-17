#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(i=int(a);i<=int(b);i++)

int dlt[200006];
string hay,needle;

bool satisfied(int pos){
    int j=0,i;
    loop(i,0,hay.size()-1){
        if(dlt[i]>=pos && hay[i]==needle[j])
            j++;
        if(j==needle.size())
            return true;
    }
    return false;
}

int main(){
    while(cin>>hay>>needle){
        int temp,i;
        loop(i,0,hay.size()-1){
            scanf("%d",&temp);
            dlt[temp-1]=i;
        }

        int low=0,high=hay.size(),mid;
        while(low<high){
            mid=(low+high+1)/2;
            if(satisfied(mid))
                low=mid;
            else
                high=mid-1;
        }
        printf("%d\n",low);
    }
    return 0;
}
