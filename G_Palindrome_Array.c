#include <stdio.h>

int main() {
    long long int n,flag=0;
    scanf("%lld",&n);
    long long int num[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&num[i]);
    }
    for(int i=0;i<n;i++){
        if(num[i]!=num[n-i-1]){
            flag=1;
        }
    }
    if(flag==1){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}