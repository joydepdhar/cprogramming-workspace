#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[1001], b[1001], c[2002];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[n-1-i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}
