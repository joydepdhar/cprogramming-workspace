#include <stdio.h>

int main() {
    long long int n,sum=0;
    scanf("%lld",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&num[i]);
        sum=sum+num[i];
    }
    if(sum<=0){
        sum=sum*(-1);
    }
    printf("%lld",sum);
    return 0;
}