#include <stdio.h>

int main() {
    long long int n,index=0;
    scanf("%lld",&n);
    long long int A[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&A[i]);   
    } 
    long long int min=A[0];
    for(int i=0;i<n;i++){
        if(min>A[i]){
            min=A[i];
            index=i;
        }
    }
    printf("%lld %lld",min, index+1);
    return 0;
}