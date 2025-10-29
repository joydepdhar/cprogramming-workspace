#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n],superarr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    scanf("%d",&index);
    for(int i=0;i<n;i++){
        if(index==arr[i]){
            for(int j=0;j<n;j++){
                superarr[j]=arr[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",superarr[i]);
    }
    return 0;
}