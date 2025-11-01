#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key,flag=0;
    scanf("%d",&key);
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]+arr[j]==key){
                flag=1;
            }
        }
    }
    if(flag==1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}