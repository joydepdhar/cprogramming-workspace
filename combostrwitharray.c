// // 1.sum and avg in array;
// #include <stdio.h>

// int main() {
//     int n,sum=0,avg;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     avg=sum/n;
//     printf("sum: %d \n",sum);
//     printf("avg: %d\n",avg);
//     return 0;
// }

// // FInd max and min element in array
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0],min=arr[0];
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     printf("%d ",max);
//     printf("%d",min);
//     return 0;
// }
// Count Even and Odd Numbers in Array
// #include <stdio.h>

// int main() {
//     int n,ev=0,od=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             ev++;
//         }else{
//             od++;
//         }
//     }
//     printf("Even: %d\n",ev);
//     printf("odd: %d",od);
//     return 0;
// }

// // Reverse a String;
// #include <stdio.h>

// int main() {
//     char a[1000];
//     gets(a);
//     int x=strlen(a);
//     for(int i=x;i>=0;i--){
//         printf("%c",a[i]);
//     }
//     return 0;
// }
// Count Vowels and Consonants in a String
