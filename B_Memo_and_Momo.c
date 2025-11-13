#include <stdio.h>

int main() {
    long long int arr[3];
    for(int i=0;i<3;i++){
        scanf("%lld",&arr[i]);
    }
    if(arr[0]%arr[2]==0&&arr[1]%arr[2]==0){
        printf("Both");
    }else if(arr[0]%arr[2]==0){
        printf("Memo");
    }else if (arr[1]%arr[2]==0){
        printf("Momo");
    }else{
        printf("No One");
    }
    return 0;
}