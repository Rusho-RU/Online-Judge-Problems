#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int data[n],price,f,s;
        for(int i=0;i<n;i++){
            scanf("%d",&data[i]);
        }
        sort(data,data+n);
        scanf("%d",&price);

        int low=0,high=n-1,mid,middle=price/2;

        while(low<=high){
            mid=(low+high)/2;
            if(data[mid]==middle) break;
            else if(data[mid]>middle) high=mid-1;
            else if(data[mid]<middle) low=mid+1;
        }

        if(low>high)
            mid=high;

        for(int i=mid;i>-1;i--){
            int target=price-data[i];
            if(target<data[i]) break;

            low=i+1,high=n-1,mid=(low+high)/2;
            while(low<=high){
                if(data[mid]==target) break;
                else if(data[mid]>target) high=mid-1;
                else if(data[mid]<target) low=mid+1;
                mid=(low+high)/2;
            }

            if(low<=high){
                f=data[i],s=data[mid];
                break;
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n",f,s);
    }
    return 0;
}
