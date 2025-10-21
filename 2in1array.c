#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n],arrw[m];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&arrw[i]);
    }
    int superarr[m+n];
    for(int i=0;i<n;i++){
        superarr[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        superarr[i+n]=arrw[i];
    }
    for(int i=0;i<n+m;i++){
        printf("%d ",superarr[i]);
    }
    return 0;
}