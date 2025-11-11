#include <stdio.h>
void rec(int n){
    if(n<10){
        printf("%d ",n);
        return;
    }
    rec(n/10);
    int last =n%10;
    printf("%d ",last);
    
    
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        rec(arr[i]);
        printf("\n");
    }
    return 0;
}