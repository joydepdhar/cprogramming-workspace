#include <stdio.h>

int main() {
    long long int x;
    scanf("%lld",&x);
    long long int A[x];
    for(int i=0;i<x;i++){
        scanf("%lld",&A[i]);
        if(A[i]<=10){
            printf("A[%d] = %d\n",i,A[i]);
        }
    }
    return 0;
}