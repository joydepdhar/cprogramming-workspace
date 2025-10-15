// Take N numbers in an array and print them in the same order.
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("Array Element%d: %d\n",i,arr[i]);
//     }
//     return 0;
// }
// // Print array elements in reverse order.
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=n-1;i>=0;i--){
//         printf("Array Element%d: %d\n",i,arr[i]);
//     }
//     return 0;
// }

// Sum and Average
// Find the sum and average of all elements.
// #include <stdio.h>

// int main() {
//     int num[5]={1,2,3,4,5};
//     int sum=0;
//     float avg;
//     for(int i=0;i<5;i++){
//         sum=sum+num[i];
//     }
//     avg=sum/5;
//     printf("Sum: %d\n",sum);
//     printf("Avg: %.2f\n",avg);
//     return 0;
// }
// Max & Min
// Find largest and smallest element in the array.
// #include <stdio.h>

// int main() {
//     int num[5]={1,2,3,4,5};
//     int max=num[0];
//     int min=num[0];
//     for(int i=0;i<5;i++){
//         if(max<num[i+1]){
//             max=num[i+1];
//         }
//         if(min>num[i]){
//             min=num[i+1];
//         }
//     }
//     printf("Max: %d\n",max);
//     printf("Min: %d\n",min);
//     return 0;
// }
// Count Even/Odd
// // Count how many numbers are even and how many are odd.
// #include <stdio.h>

// int main() {
//     int num[5]={1,2,3,4,5};
//     int ev=0,od=0;
//     for(int i=0;i<5;i++){
//         if(num[i]%2==0){
//             ev++;
//         }else{
//             od++;
//         }
//     }
//     printf("Evne:%d \n",ev);
//     printf("Odd: %d",od);
//     return 0;
// }
// Array Copy
// // Copy elements from one array to another.
// #include <stdio.h>

// int main() {
//     int num[5]={1,2,3,4,5};
//     int arr[5];
//     for(int i=0;i<5;i++){
//         arr[i]=num[i];
//     }
//     for(int i=0;i<5;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
// Reverse Array
// // Reverse elements in-place (without using a second array).
// #include <stdio.h>

// int main() {
//     int num[5]={1,2,3,4,5};
//     int n=5;
//     for(int i=0; i < n/2;i++){
//         int swap=num[i];
//         num[i]=num[n-i-1];
//         num[n-i-1]=swap;
//     }
//     printf("Reverse Array without another Array: ");
//     for(int i=0;i<5;i++){
//         printf("%d ",num[i]);
//     }

//     return 0;
// }
// Search Element
// Input a number x and check if it exists in the array.
// #include <stdio.h>

// int main() {
//     int num[5]={1,2,3,4,5};
//     int flag=1;
//     int x;
//     scanf("%d",&x);
//     for(int i=0;i<5;i++){
//         if(x==num[i]){
//             flag=0;
//         }
//     }
//     if(flag==0){
//         printf("%d is present in the Array...",x);
//     }else{
//         printf("%d is not present in the Array...",x);
//     }
//     return 0;
// }
// Count Frequency
// // Count how many times a specific number appears.
// #include <stdio.h>

// int main() {
//     int num[9]={1,2,3,4,5,3,3,3,3};
//     int flag=0;
//     int x;
//     scanf("%d",&x);
//     for(int i=0;i<9;i++){
//         if(x==num[i]){
//             flag++;
//         }
//     }
//     printf("%d is present in the array at %d\n",x,flag);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int num[5]={1,2,3,4,5};
//     int max=num[0];
//     int smax=-2147483648;;
//     for(int i=0;i<5;i++){
//         if(max<num[i]){
//             smax=max;
//             max=num[i];
//         }
//     }
//     printf("%d ",max);
//     printf("%d",smax);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num[5]={1,2,3,4,5};
//     int n=5;
//     int flag=0;
//     for(int i=0;i<n-1;i++){
//         if(num[i]>num[i+1]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1){
//         printf("not sort");
//     }else{
//         printf("Sort");
//     }
//     return 0;
// }