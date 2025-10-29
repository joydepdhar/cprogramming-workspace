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
    int pos = 0;
    for (int i = index; i < n; i++) {
        superarr[pos++] = arr[i];
    }
    for (int i = 0; i < index; i++) {
        superarr[pos++] = arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",superarr[i]);
    }
    return 0;
}