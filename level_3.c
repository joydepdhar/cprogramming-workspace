// // Right-Angle Triangle
// // *
// // **
// // ***
// // ****

// // #include <stdio.h>

// // int main() {
// //     int n;
// //     scanf("%d",&n);
// //     for(int i=1;i<=n;i++){
// //         for(int j=1;j<i;j++){
// //             printf("*");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }


// // // Inverted Triangle
// // // ****
// // // ***
// // // **
// // // *
// // #include <stdio.h>

// // int main() {
// //     int n;
// //     scanf("%d",&n);
// //     for(int i=n;i>=1;i--){
// //         for(int j=1;j<i;j++){
// //             printf("* ");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }
// // #include <stdio.h>

// // int main() {
// //     int x;
// //     scanf("%d",&x);
// //     for(int i=1;i<x;i++){
// //         for(int j=1;j<=i;j++){
// //             printf("%d",j);
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int n;
// //     scanf("%d", &n);

// //     for (int i = 1; i <= n; i++) {
// //         for (int j = 1; j <= n - i; j++) {
// //             printf(" ");
// //         }
// //         for (int j = 1; j <= 2*i - 1; j++) {
// //             printf("*");
// //         }
// //         printf("\n"); 
// //     }

// //     return 0;
// // }
// // #include <stdio.h>

// // int main() {
// //     int n;
// //     scanf("%d", &n); // n is the number of rows in the top half

// //     // Top half (including middle)
// //     for (int i = 1; i <= n; i++) {
// //         for (int j = 1; j <= n - i; j++) printf(" ");
// //         for (int j = 1; j <= 2*i - 1; j++) printf("*");
// //         printf("\n");
// //     }

// //     // Bottom half
// //     for (int i = n-1; i >= 1; i--) {
// //         for (int j = 1; j <= n - i; j++) printf(" ");
// //         for (int j = 1; j <= 2*i - 1; j++) printf("*");
// //         printf("\n");
// //     }

// //     return 0;
// // }
#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int num=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num++);
        }
        printf("\n");
    }
    return 0;
}