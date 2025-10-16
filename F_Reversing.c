#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld",&n);
    long long int num[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&num[i]);
    }
    for(int i=0;i<n/2;i++){
        long long int swap=num[i];
        num[i]=num[n-i-1];
        num[n-i-1]=swap;
    }
    for(int i=0;i<n;i++){
        printf("%lld ",num[i]);
    }
    return 0;
}