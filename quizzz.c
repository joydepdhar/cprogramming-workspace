// // #include <stdio.h>

// // int main() {
// //     int count=0;
// //     for(int i=1;i<=4;i++){
// //         for(int j=1;j<=i;j++){
// //             printf("*");
// //             count++;
// //         }
        
// //     }
// //     printf("%d",count);
// // }
// #include <stdio.h>

// int main() {
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             printf("%d ",i);
//         }
        
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     for(int i=3;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf(" ");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    for(int i=1;i<=5;i+=2){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}