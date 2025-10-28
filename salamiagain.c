#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    long long int max=0;
    for(int i=0;i<n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    long long morearr[n];
    for(int i=0;i<n;i++){
        morearr[i]=max-arr[i];
    }
    // printf("%lld",max);
    for(int i=0;i<n;i++){
        printf("%lld ",morearr[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
