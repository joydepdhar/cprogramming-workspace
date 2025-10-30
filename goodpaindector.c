#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ev=0,od=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ev++;
        }else{
            od++;
        }
    }
    int gpairs=ev*od;
    printf("%d\n",gpairs);

    return 0;
}