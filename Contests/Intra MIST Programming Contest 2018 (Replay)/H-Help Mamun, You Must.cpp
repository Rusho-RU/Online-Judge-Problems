#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000

bool not_prime[MAX];
vector<int>palindrome;

bool isPalindrome(int n){
    char str[20];
    sprintf(str, "%d", n);

    int length = strlen(str);

    for(int i=0, j=length-1; i<length/2; i++, j--)
        if(str[i]!=str[j])
            return false;
    return true;
}

void sieve(){
    int index;

    for(int i=2; i*i<=MAX; i++){
        if(!not_prime[i]){
            if(isPalindrome(i)){
                palindrome.push_back(i);
            }
            for(int j=i*i; j<MAX; j+=i){
                not_prime[j] = true;
            }
        }
        index = i;
    }

    for(int i=index+1; i<MAX; i++)
        if(!not_prime[i] && isPalindrome(i))
            palindrome.push_back(i);

    return;
}

int main(){
    sieve();
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        int target;
        scanf("%d",&n);

        for(int i=0; i<palindrome.size(); i++){
            if(palindrome[i]>n){
                target = palindrome[i];
                break;
            }
        }

        double ans=0;

        for(int i=2; i<=target; i++){
            ans += log10(i);
        }

        int a = floor(ans) + 1;

        printf("%d\n",a);
    }

    return 0;
}
