#include <stdio.h>
void maxmin(long long int arr[],long long int n){
    long long int max=arr[0];
    long long int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
        min=arr[i];
        }
    }
    printf("%lld %lld",min,max);

}
int main() {
    long long int x;
    scanf("%lld",&x);
    long long int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%lld",&arr[i]);
    }
    maxmin(arr,x);
    
    return 0;
}