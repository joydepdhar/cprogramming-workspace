#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int preDiagonal=0;
    for(int i=0;i<n;i++){
        preDiagonal+=arr[i][i];
    }
    int secDiagonal=0;
     for (int i = 0; i < n; i++) {
        secDiagonal += arr[i][n - 1 - i];
    }
    // int sum =preDiagonal+secDiagonal;
    int sumdiagonal=abs(preDiagonal - secDiagonal)
;
    printf("%d",sumdiagonal);
    return 0;
}