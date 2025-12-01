// // // //finding missing number
// // // // #include <stdio.h>

// // // // int main() {
// // // //     long long int n;
// // // //     scanf("%lld",&n);
// // // //     while(n--){
// // // //         long long int arr[4];
// // // //     for(int i=0;i<4;i++){
// // // //         scanf("%lld",&arr[i]);
// // // //     }
// // // //     int product=arr[1]*arr[2]*arr[3];
// // // //     if(arr[0]%product==0){
// // // //         long long int x=arr[0]/product;
// // // //         printf("%lld",x);
// // // //     }else{
// // // //         printf("-1");
// // // //     }
    
// // // //     }
// // // //     return 0;
// // // // }

// // // //Jadu Number
// // // #include <stdio.h>

// // // int main() {
// // //     int m,n;
// // //     scanf("%d %d",&m,&n);
// // //     int arr[m][n];
// // //     for(int i=0;i<m;i++) {
// // //         for (int j=0;j<n;j++) {
// // //             scanf("%d",&arr[i][j]);
// // //         }
// // //     }
// // //     int isJadu=1;
// // //     if(m==n){
// // //         for(int i=0;i<m;i++) {
// // //         for(int j=0;j<n;j++) {
// // //             if(i==j||i+j==n-1) {
// // //                 if(arr[i][j]!=1)
// // //                     isJadu=0;
// // //             } else{
// // //                 if(arr[i][j]!=0)
// // //                     isJadu=0;
// // //             }
// // //         }
        
// // //     }
// // //     if(isJadu!=1){
// // //             printf("NO");
// // //         }else{
// // //             printf("YES");
// // //         }
// // //     }else{
// // //         printf("NO");
// // //     }

// // //     return 0;
// // // }

// // // // matrix again
// // // #include <stdio.h>

// // // int main() {
// // //     int r,c;
// // //     scanf("%d %d",&r,&c);
// // //     int arr[r][c];
// // //     for(int i=0;i<r;i++) {
// // //         for (int j=0;j<c;j++) {
// // //             scanf("%d",&arr[i][j]);
// // //         }
// // //     }
// // //     for(int i=r-1;i<r;i++){
// // //         for(int j=0;j<c;j++){
// // //             printf("%d ",arr[i][j]);
// // //         }
// // //         printf("\n");
// // //     }
// // //     for(int i=0;i<r;i++){
// // //         for(int j=c-1;j<c;j++){
// // //             printf("%d ",arr[i][j]);
// // //         }
// // //     }
    

// // //     return 0;
// // // }
// // // difference Array
// // #include <stdio.h>
// // #include <math.h>
// // int main() {
// //     int n;
// //     scanf("%d",&n);
// //     int a[n],b[n],c[n];
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&a[i]);
// //         b[i]=a[i];
// //     }
// //     for (int i = 0; i < n - 1; i++) {
// //         for (int j = 0; j < n - i - 1; j++) {
// //             if (b[j] > b[j + 1]) {
// //                 int temp = b[j];
// //                 b[j] = b[j + 1];
// //                 b[j + 1] = temp;
// //             }
// //         }
// //     }
// //     for(int i=0;i<n;i++){
// //         c[i]= abs(a[i]-b[i]);
// //     }
// //     for(int i=0;i<n;i++){
// //         printf("%d ",c[i]);
// //     }
// //     return 0;
// // }

// // // //magic Tree
// // // #include <stdio.h>

// // // int main() {
// // //     int n;
// // //     scanf("%d", &n);

// // //     // Print the tree (pyramid)
// // //     for (int i = 1; i <= n; i++) {
// // //         for (int j = i; j < n; j++)  // print space
// // //             printf(" ");
// // //         for (int k = 1; k <= (2 * i - 1); k++)  // print star
// // //             printf("*");
// // //         printf("\n");
// // //     }

// // //     // Print the trunk (4 lines, 3 star wide, centered)
// // //     for (int i = 1; i <= 4; i++) {
// // //         for (int j = 1; j < n - 1; j++)  // center the trunk
// // //             printf(" ");
// // //         printf("***\n");
// // //     }

// // //     return 0;
// // // }
// #include <stdio.h>

// void printTree(int n) {
//     int crownRows = 5 + (n + 1) / 2;
//     int width = 11 + n * 2;
//     int sqwid = n;
//     int sqheight = 5;
    
//     // Print crown (pyramid)
//     for (int i = 0; i < crownRows; i++) {
//         int star = 1 + i * 2;
//         int space = (width - star) / 2;
        
//         // Print leading space
//         for (int j = 0; j < space; j++) {
//             printf(" ");
//         }
//         for(int j=0;j<star; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     // Print trunk (rectangle)
//     for (int i = 0; i < sqheight; i++) {
//         int space = (width - sqwid) / 2;
        
//         // Print leading space
//         for (int j = 0; j < space; j++) {
//             printf(" ");
//         }
        
//         // Print trunk star
//         for (int j = 0; j < sqwid; j++) {
//             printf("*");
//         }
        
//         printf("\n");
//     }
// }

// int main() {
//     int input;
    
//     printf("Enter a value (odd number): ");
//     scanf("%d", &input);
    
//     printTree(input);
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int r =5+(n+1) / 2;
    int width=11+n*2;
    int sqwid=n;
    int sqheight = 5;
    for(int i=0;i<r;i++) {
        int star=1+i*2;
        int space =(width-star)/2;
        for(int j=0;j<space;j++) {
            printf(" ");
        }
        for(int j=0;j<star;j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<sqheight;i++) {
        int space =(width-sqwid)/2;
        for(int j=0;j<space;j++) {
            printf(" ");
        }
        for(int j=0;j<sqwid;j++) {
            printf("*");
        }   
        printf("\n");
    }
    return 0;
}