#include <stdio.h>
void odd_even(int arr[],int n){
    int ev=0,od=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            ev++;
        }else{
            od++;
        }
    }
    printf("%d %d",ev, od);
}
int main() {
    printf("Super Even odd count:");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    odd_even(arr,n);
    return 0;
}